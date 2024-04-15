#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;


    while (start < end) {
       
        int temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Array in reverse order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
