#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    double arr[SIZE]{ 500,250,100,50,654,975,348,115,490,210 };
    double sale;

    do {
        cout << "Enter sale percentage: ";
        cin >> sale;
    } while (sale < 0);

    for (int i = 0; i < SIZE; i++) {
        double temp = arr[i];
        temp *= sale / 100;
        arr[i] -= temp;
    }

    cout << "\nSale price: ";

    for (int i = 0; i < SIZE; i++) {
        if ((i + 1) < SIZE) 
            cout << arr[i] << ", ";
        else
            cout << arr[i] << endl;
    }

    return 0;
}
