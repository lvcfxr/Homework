#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;



void add(int* a, int* b, int* result) {
    *result = *a + *b;
}

void subtract(int* a, int* b, int* result) {
    *result = *a - *b;
}

void multiply(int* a, int* b, int* result) {
    *result = *a * *b;
}

void divide(int* a, int* b, float* result) {
    if (*b != 0) {
        *result = (float)(*a) / (*b);
    }
    else {
        cout << "Error: Division by zero!" << endl;
    }
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    char operation;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    int result;
    float float_result;

    switch (operation) {
    case '+':
        add(&num1, &num2, &result);
        cout << "Result of addition: " << result << endl;
        break;
    case '-':
        subtract(&num1, &num2, &result);
        cout << "Result of subtraction: " << result << endl;
        break;
    case '*':
        multiply(&num1, &num2, &result);
        cout << "Result of multiplication: " << result << endl;
        break;
    case '/':
        divide(&num1, &num2, &float_result);
        if (num2 != 0) {
            cout << "Result of division: " << float_result << endl;
        }
        break;
    default:
        cout << "Error: Invalid operation!" << endl;
        break;
    }

    return 0;
}