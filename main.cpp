#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Array {
private:
    int* data;
    int size;
public:
    Array(int* arr, int n) : size(n) {
        data = new int[n];
        for (int i = 0; i < n; ++i) {
            data[i] = arr[i];
        }
    }

    ~Array() {
        delete[] data;
    }

    friend int find_maximum(const Array& arr);
};

int find_maximum(const Array& arr) {
    if (arr.size == 0) {
        return -1;
    }
    int max_value = arr.data[0];
    for (int i = 1; i < arr.size; ++i) {
        if (arr.data[i] > max_value) {
            max_value = arr.data[i];
        }
    }
    return max_value;
}

int main() {
    int values[10];

    srand(time(0));

    for (int i = 0; i < 10; i++) {
        values[i] = rand() % 50;
    }

    int n = sizeof(values) / sizeof(values[0]);
    Array arr(values, n);

    cout << "Maximum value: " << find_maximum(arr) << endl;

    return 0;
}
