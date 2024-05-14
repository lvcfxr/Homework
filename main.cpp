#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


int** setMemory(int rows, int columns) {
    if (rows <= 0 || columns <= 0) {
        cout << "Size is too low!";
        exit(EXIT_FAILURE);
    }

    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[columns];
    }

    return array;
}


void freeMemory(int** array, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;
}


void fillArr(int** array, int rows, int columns) {
    srand(time(0));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = (rand() % 100) + 11;
        }
    }
}


void printArr(int** array, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}


int** addElement(int** array, int& rows, int& columns, int number) {
    
    int** newArray = new int* [rows];
    for (int i = 0; i < rows; i++) {
        newArray[i] = new int[columns + 1];
        
        for (int j = 0; j < columns; j++) {
            newArray[i][j] = array[i][j];
        }
    }

    
    for (int i = 0; i < rows; i++) {
        newArray[i][columns] = number;
    }

    
    columns++;

    
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }
    delete[] array;

    return newArray;
}


void insertElement(int** array, int rows, int columns) {
    int row, column, number;

    cout << "Enter number to insert: ";
    cin >> number;

    cout << "Enter row you want to insert your number: ";
    cin >> row;

    cout << "Enter column you want to insert your number: ";
    cin >> column;

    if (row < 1 || row > rows) {
        cout << "Row is out of range!" << endl;
        return;
    }
    if (column < 1 || column > columns) {
        cout << "Column is out of range!" << endl;
        return;
    }

    array[row - 1][column - 1] = number;
}


void deleteElement(int** array, int rows, int columns) {
    int row, column;

    cout << "Enter row you want to delete: ";
    cin >> row;

    cout << "Enter column you want to delete: ";
    cin >> column;

    if (row < 1 || row > rows) {
        cout << "Row is out of range!" << endl;
        return;
    }
    if (column < 1 || column > columns) {
        cout << "Column is out of range!" << endl;
        return;
    }

    array[row - 1][column - 1] = 0; 
}

int main() {
    int row, column;

    cout << "Enter rows: ";
    cin >> row;

    cout << "Enter columns: ";
    cin >> column;

    
    int** arr = setMemory(row, column);
    if (arr == nullptr) {
        return 1;
    }

    
    fillArr(arr, row, column);

    
    printArr(arr, row, column);

    
    int number;
    cout << "Enter number to put at the end of array: ";
    cin >> number;
    arr = addElement(arr, row, column, number);
    printArr(arr, row, column);

    
    insertElement(arr, row, column);
    printArr(arr, row, column);

    
    deleteElement(arr, row, column);
    printArr(arr, row, column);

    
    freeMemory(arr, row);

    return 0;
}
