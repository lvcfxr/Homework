#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

struct students {
    string name;
    string surname;
    int age;
    int avg;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Age: " << age << endl;
        cout << "Average grade: " << avg << endl;
    }

    
};

int main() {

    students* Student = new students[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << endl;

        cout << "\nEnter students name > ";
        cin >> Student[i].name;

        cout << "Enter students surname > ";
        cin >> Student[i].surname;

        cout << "Enter students age > ";
        cin >> Student[i].age;

        cout << "Enter students average grade > ";
        cin >> Student[i].avg;

        cout << "======================" << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        Student[i].displayInfo();       
    }
    
    if(Student != nullptr)
        delete[] Student;

    return 0;
}