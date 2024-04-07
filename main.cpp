#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    const int size = 10;
    int arr[size];

    
    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Unsorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    sortArray(arr, size);

    cout << "\nSorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    return 0;
}