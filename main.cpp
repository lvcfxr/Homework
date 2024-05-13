#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;


    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;


        start++;
        end--;
    }
}

int main(){

    int* arr = nullptr;
    int size = 0;
    int capacity = 0;
    int num;

    cout << "Enter numbers (enter 0 to exit):\n";
    do {
        cin >> num;
        if (num != 0) {
            if (size >= capacity) {
                
                capacity = (capacity == 0) ? 1 : capacity * 2;
                int* temp = new int[capacity];
                
                for (int i = 0; i < size; ++i) {
                    temp[i] = arr[i];
                }
                
                delete[] arr;
                arr = temp;
            }
            arr[size++] = num;
        }
    } while (num != 0);

    reverseArray(arr, size);

    cout << "Your array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    delete[] arr; 

    return 0;
}