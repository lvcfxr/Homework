#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;


int const SIZE = 5;


void f(int arr[]) {
    sort(arr, arr + SIZE);
}


int main() {
    int arr[SIZE] = { 8,3,2,6,1 };


    cout << "Original array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    f(arr);


    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
