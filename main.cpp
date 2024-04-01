#include <iostream>
#include <algorithm>
#include <ctime>
#include <cctype>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main() {

    cout << findMax(10, 15, 20);
    return 0;
}