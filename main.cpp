#include <iostream>
#include <list>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int elements;
    cout << "Enter count of list elements: ";
    cin >> elements;

    list<int> nums(elements, 0);

    srand(time(0));

    
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        *it = rand() % 100;
    }

    
    cout << "\nList elements: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << ' ';
    }

    int user_input;
    cout << "\nChoose index to delete (0 to " << nums.size() - 1 << "): ";
    cin >> user_input;

    
    if (user_input >= nums.size()) {
        cout << "Index out of range!" << endl;
    }
    else {
        
        auto it = nums.begin();
        advance(it, user_input);

        
        nums.erase(it);

        
        cout << "List after deletion: ";
        for (auto it = nums.begin(); it != nums.end(); ++it) {
            cout << *it << ' ';
        }
    }

    return 0;
}
