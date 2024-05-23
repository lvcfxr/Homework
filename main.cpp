#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

struct Student {
    string name;
    string surname;
    int age;
    int avg;
};

const int MAX_STUDENTS = 10;
Student students[MAX_STUDENTS];
int num_students = 0;

void add_student() {
    if (num_students < MAX_STUDENTS) {
        Student student;
        cout << "\nEnter student's name > ";
        cin >> student.name;

        cout << "Enter student's surname > ";
        cin >> student.surname;

        cout << "Enter student's age > ";
        cin >> student.age;

        cout << "Enter student's average grade > ";
        cin >> student.avg;

        students[num_students++] = student;
        cout << student.name << " " << student.surname << " added to the database." << endl;
    }
    else {
        cout << "Maximum number of students reached." << endl;
    }
}

void remove_student() {
    string surname;
    cout << "Enter student's surname to remove: ";
    cin >> surname;

    bool found = false;
    for (int i = 0; i < num_students; ++i) {
        if (students[i].surname == surname) {
            for (int j = i; j < num_students - 1; ++j) {
                students[j] = students[j + 1];
            }
            num_students--;
            cout << surname << " removed from the database." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << surname << " not found in the database." << endl;
    }
}

void search_student_by_name() {
    string name;
    cout << "Enter student's name to search: ";
    cin >> name;

    bool found = false;
    for (int i = 0; i < num_students; ++i) {
        if (students[i].name == name) {
            cout << "Found student:" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Surname: " << students[i].surname << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Average grade: " << students[i].avg << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No students found with the name " << name << "." << endl;
    }
}

int main() {
    while (true) {
        cout << "\n1. Add Student" << endl;
        cout << "2. Remove Student by Surname" << endl;
        cout << "3. Search Student by Name" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            remove_student();
            break;
        case 3:
            search_student_by_name();
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
