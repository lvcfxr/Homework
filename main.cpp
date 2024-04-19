#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

bool isPrime(int number) {

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return number > 1;
}

int newarrSize;

int* NonPrimaryNums(int* arr, int size) {

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    
    int* newarr = new int[count];

    for (int i = 0, j = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            newarr[j++] = arr[i];
        }
    }

    newarrSize = count;

    delete[] arr;

    return newarr;
}

int main() {
    
    int* ptr = nullptr, size;

    cout << "Enter size of array > ";
    cin >> size;

    ptr = new int[size];
    
    srand(time(0));

    for (int i = 0; i < size; i++) {
        ptr[i] = rand() % 300;
        cout << ptr[i] << ' ';
    }
    cout << endl;

    ptr = NonPrimaryNums(ptr, size);

    if (ptr != nullptr) {
        for (int i = 0; i < newarrSize; i++) {
            cout << ptr[i] << ' ';
        }
        delete[] ptr;
    }
    
    return 0;
}
