#include <iostream>
#include <algorithm>

using namespace std;

void sortTwoThirds(int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    if (sum / size > 0) {
        int end = (size * 2) / 3;
        sort(arr, arr + end);
    }

    else {
        sort(arr, arr + size / 3);
    }

    reverse(arr + (size * 2) / 3, arr + size);
}

void printArray(int arr[], int size) {

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main() {

    int arr[] = { 3, -1, 5, 2, -4, 8, 0, -6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);

    sortTwoThirds(arr, size);

    printArray(arr, size);

    return 0;
}