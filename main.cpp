#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

template <typename type>
type arrSum(type arr[], int arrSize) {
    type sum = 0;

    for (int i = 0; i < arrSize; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    srand(time(0));

    double arr[6];

    for (int i = 0; i < 6; i++) {
        arr[i] = rand() % 30;
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << ' ';
    }

    cout << endl;

    auto sum = arrSum(arr, 6);

    cout << sum;

    return 0;
}
