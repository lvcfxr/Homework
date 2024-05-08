#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

struct Car {
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void findCarByYear(int tyear) {
        if (year == tyear) {
            cout << "=====================" << endl;
            displayInfo();
        }
        else {
            cout << "Car with year " << tyear << " not found." << endl;
        }
    }
};

int main() {

    Car cars[3] = {
        {"Audi", "A4", 2020},
        {"BMW", "X5", 2019},
        {"Mercedes", "E-Class", 2018}
    };

    for (int i = 0; i < 3; ++i) {
        cout << "Information about Car #" << i + 1 << ":" << endl;
        cars[i].displayInfo();
        cout << endl;
    }

    int userinput;

    cout << "Enter a year > ";
    cin >> userinput;
    
    cars[0].findCarByYear(userinput);

    return 0;
}