#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int* newReverseArray(int* arr, int size) {
    int* newarr = new int[size];
    int* start = arr;
    int* end = arr + size - 1;
    int* newStart = newarr;

    while (start <= end) {
        *newStart = *end;
        newStart++;
        end--;
    }

    return newarr;
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int* newarr = newReverseArray(arr, size);

    cout << "New array in reverse order: ";
    for (int i = 0; i < size; i++) {
        cout << newarr[i] << " ";
    }
    cout << endl;

    delete[] newarr;

    return 0;
}
