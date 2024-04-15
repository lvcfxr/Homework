#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


int maxEl(int* arr, int size) {

    int maxEl = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxEl) {
            maxEl = arr[i];
        }
    }
    return maxEl;
}

int main() {
    const int size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }

    int max = maxEl(arr, size);
    cout << "\nBiggest element in array: " << max << endl;

    return 0;
}