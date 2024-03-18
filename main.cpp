#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE]{ 1,3,4,7,2,9,6,8,10,16 };
    int a = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + a);

    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        if ((i + 1) < SIZE)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << endl;
    }
    return 0;
}