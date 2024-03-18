#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 20;
    int numbers[SIZE];

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        numbers[i] = (rand() % 20) + 1;
    }

    bool printed = false;

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] % 2 == 0) {
            if (printed) {
                cout << ", ";
            }
            cout << numbers[i];
            printed = true;
        }
    }

    cout << endl;

    return 0;
}