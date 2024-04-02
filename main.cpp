#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

int firstDigits(int n, int k) {

    int num = n;

    while (num >= pow(10, k)) {
        num /= 10;
    }
    return num;
}

int main() {
    
    int n;
    int k;
    

    
    cout << "Enter number: ";
    cin >> n;

    cout << "Enter how many digits you want to see? ";
    cin >> k;

    


    auto result = firstDigits(n, k);

    cout << result;
    

    return 0;
}
