#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int newSize = 0;

int* deleteElements(int* arr, int size) {

    int count = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] <= 0) {
            count++;
        }
    }

    newSize = count;

    int* newArr = new int[newSize];

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] <= 0) {
            newArr[j] = arr[i];
            j++;
        }
    }

    return newArr;
}

int main() {
    int size;

    cout << "Enter how many elements will be in array: ";
    cin >> size;

    if (size <= 0) {
        cout << "\nSize equals 0" << endl;
        return 0;
    }

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Insert number in arr[" << i + 1 << "]: ";
        cin >> arr[i];
    }

    int* newArr = deleteElements(arr, size);

    if (newSize != 0) {
        cout << "\nNew array: ";
        for (int i = 0; i < newSize; i++) {
            cout << newArr[i] << ' ';
        }
    }
    else {
        cout << "\nNo elements less than or equal to 0." << endl;
    }

    if(newArr != nullptr)
        delete[] newArr;

    return 0;
}