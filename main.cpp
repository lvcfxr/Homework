#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int maxEl(int *arr,int size) {

    int maxel = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxel) {
            maxel = arr[i];
        }
    }

    return maxel;
}

int minEl(int* arr, int size) {

    int minel = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < minel) {
            minel = arr[i];
        }
    }
    return minel;
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

    if (ptr != nullptr) {
        auto maxel = maxEl(ptr, size);
        auto minel = minEl(ptr, size);

        cout << "Max element in array: " << maxel << "\nMin element in array: " << minel << endl;
        delete[] ptr;
    }
    


    

    return 0;
}
