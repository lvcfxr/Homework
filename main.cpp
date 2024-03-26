#include <iostream>
#include <ctime>


using namespace std;


int main() {

    const int size = 6;

    double arr[size];

    double sum = 0;

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            cout << "Enter company profit for " << i + 1 << "st month: ";
            cin >> arr[i];
            sum += arr[i];
            cout << endl;
        }
        else if (i == 1) {
            cout << "Enter company profit for " << i + 1 << "nd month: ";
            cin >> arr[i];
            sum += arr[i];
            cout << endl;
        }
        else if (i == 2) {
            cout << "Enter company profit for " << i + 1 << "rd month: ";
            cin >> arr[i];
            sum += arr[i];
            cout << endl;
        }
        else {
            cout << "Enter company profit for " << i + 1 << "th month: ";
            cin >> arr[i];
            sum += arr[i];
            cout << endl;
        }
    }

    cout << "General profit: " << sum << endl;

    cout << "Profit for the last 6 month: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " / ";

    }

    cout << "\n";

    return 0;

}