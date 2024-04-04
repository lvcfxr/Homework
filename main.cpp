#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int arrSum(int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    int const size = 10;
    int arr[size];

    srand(time(0));

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Array: ";

    for (int i = 0; i < size; i++) {
         cout << arr[i] << ' ';
    }

    int sum = arrSum(arr, size);

    cout << "\nArray sum: " << sum << endl;

    return 0;
}
