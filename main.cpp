#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool find_by_name(const string& user_input, const vector<string>& names) {
    for (const string& el : names) {
        if (user_input == el) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> names = { "Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly" };

    string user_input;

    cout << "Enter a name: ";
    cin >> user_input;

    if (find_by_name(user_input, names)) {
        cout << user_input << " was found." << endl;
    }
    else {
        cout << user_input << " was not found." << endl;
    }

    return 0;
}
