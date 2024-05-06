#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int pSize = 0;
int nSize = 0;
int zSize = 0;


int* pArr(int* arr, int size) {
    int count = 0;

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }

    }
    pSize = count;

    int* pArr = new int[pSize];

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] > 0) {
            pArr[j] = arr[i];
            j++;
        }

    }

    return pArr;
}

int* nArr(int* arr, int size) {
    int count = 0;

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] < 0) {
            count++;
        }
    }

    nSize = count;

    int* negArr = new int[nSize];

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] < 0) {
            negArr[j] = arr[i];
            j++;
        }
    }

    return negArr;
}

int* zArr(int* arr, int size) {
    int count = 0;

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }

    zSize = count;
    int* zeroArr = new int[zSize];

    for (int i = 0, j = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeroArr[j] = arr[i];
            j++;
        }
    }


    return zeroArr;
}

int main() {
    const int size = 15;
    int arr[size];

    srand(time(0));

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 201) - 100;
        cout << arr[i] << " ";
    }

 

    int* posArr = pArr(arr, size);

    cout << "\n\nPositive number arr: ";
    for (int i = 0; i < pSize; i++) {
        cout << posArr[i] << " ";
    }

    if (posArr != nullptr) {
        delete[] posArr;
    }

    int* negArr = nArr(arr, size);

    cout << "\nNegative number arr: ";
    for (int i = 0; i < nSize; i++) {
        cout << negArr[i] << " ";
    }

    if (negArr != nullptr) {
        delete[] negArr;
    }

    int* zeroArr = zArr(arr, size);
    cout << "\nZeroes: ";
    for (int i = 0; i < zSize; i++) {
    cout << zeroArr[i] << " ";
    }

    cout << endl;

    if (zeroArr != nullptr) {
        delete[] zeroArr;
    }

    return 0;
}
