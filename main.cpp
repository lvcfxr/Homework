#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


int main() {
    const int MAX_SIZE = 100;
    char array[MAX_SIZE];
    cout << "Enter a string: ";
    cin.getline(array, MAX_SIZE);

    int used = strlen(array);
    int free = MAX_SIZE - used - 1;

    cout << "Number of used elements: " << used << endl;
    cout << "Number of free elements: " << free << endl;

    return 0;
}
