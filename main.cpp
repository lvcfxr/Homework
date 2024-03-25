#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    const int size = 4;

    int arr[size];
    int user_input;

    do {
        cout << "Enter number(1 - 5): ";
        cin >> user_input;
    } while (user_input < 0 || user_input > 5);


    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 5;
        if (arr[i] == user_input) {
            cout << "\narr[" << i << "] = " << arr[i];
        }
    }

    cout << "\n\nArray - ";


    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
