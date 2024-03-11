#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Enter the initial number of boxes in the warehouse (n): ";
        cin >> n;
    } while (n < 0);

    int cars = 0;



    while (n > 0) {
        int boxes_to_pick;

        cout << "Enter the number of boxes that the car will pick up (max " << n << "): ";
        cin >> boxes_to_pick;
        

        n -= boxes_to_pick;
        cars++;
    }

    cout << "\nThe number of cars that arrived at the warehouse: " << cars << endl;

    return 0;
}
