#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    string surname;
    string studentID;
    double avgGrade;

    Student(string n = "", string s = "", string id = "", double avg = 0.0)
        : name(n), surname(s), studentID(id), avgGrade(avg) {}

    Student(const Student& other)
        : name(other.name), surname(other.surname), studentID(other.studentID), avgGrade(other.avgGrade) {}

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Average Grade: " << avgGrade << endl;
    }
};

class StudentList {
private:
    Student* students;
    int numStudents;
    int capacity;

    void resize(int newCapacity) {
        Student* newStudents = new Student[newCapacity];
        for (int i = 0; i < numStudents; ++i) {
            newStudents[i] = students[i];
        }
        delete[] students;
        students = newStudents;
        capacity = newCapacity;
    }

public:
    StudentList(int initialCapacity = 10) : numStudents(0), capacity(initialCapacity) {
        students = new Student[capacity];
    }

    ~StudentList() {
        delete[] students;
    }

    void addStudent(const Student& student) {
        if (numStudents >= capacity) {
            resize(capacity * 2);
        }
        students[numStudents++] = student;
    }

    void editStudent(int index, const Student& newData) {
        if (index >= 0 && index < numStudents) {
            students[index] = newData;
        }
        else {
            cout << "Invalid index." << endl;
        }
    }

    void removeStudent(int index) {
        if (index >= 0 && index < numStudents) {
            for (int i = index; i < numStudents - 1; ++i) {
                students[i] = students[i + 1];
            }
            numStudents--;
        }
        else {
            cout << "Invalid index." << endl;
        }
    }

    void displayAllStudents() const {
        for (int i = 0; i < numStudents; ++i) {
            cout << "Student " << i + 1 << ":" << endl;
            students[i].displayInfo();
            cout << "-----------------" << endl;
        }
    }
};

int main() {
    StudentList studentList;

    studentList.addStudent(Student("John", "Doe", "S12345", 4.0));
    studentList.addStudent(Student("Jane", "Smith", "S67890", 3.8));

    cout << "All students:" << endl;
    studentList.displayAllStudents();

    studentList.editStudent(0, Student("John", "Doe", "S12345", 4.5));

    studentList.removeStudent(1);

    cout << "All students after edits:" << endl;
    studentList.displayAllStudents();

    return 0;
}
