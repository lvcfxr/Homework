#include <iostream>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;


int const SIZE = 5;


void f(char arr[]) {
    for (int i = 0; i < SIZE; i++) {
        if (isupper(arr[i]))
            arr[i] = tolower(arr[i]);
    }
}


int main() {
    char arr[SIZE]{ 'H', 'E', 'L', 'L', 'O' };
    
    f(arr);

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i];
    }

    cout << endl;

    return 0;
}
