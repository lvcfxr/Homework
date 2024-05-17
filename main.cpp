#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


class Array {
public:
    Array(int size = 5) {
        if (size > 0) {
            m_size = size;

            m_ptr = new int[m_size];

            srand(time(0));

            for (int i = 0; i < m_size; i++) {
                m_ptr[i] = rand() % 76;
            }

        }
        else {
            cout << "Size is too low!";
            exit;
        }


    }

    int findByIndex(int index) {
        if ((index + 1) <= m_size)
            return m_ptr[index + 1];
        else {
            cout << "Index is out of range!";
            exit;
        }
    }

    void print() {
        if (m_size > 0) {
            for (int i = 0; i < m_size; i++) {
               cout << m_ptr[i] << ' ';
            }
        }
        cout << endl;
    }

    ~Array() {
        if (m_ptr != nullptr) {
            delete[] m_ptr;
        }
    }

private:
    int m_size;
    int* m_ptr;
};




int main() {
    
    Array arr1(0);
    arr1.print();

    int user_input;

    cout << "Enter index > ";
    cin >> user_input;

    arr1.findByIndex(user_input);

    return 0;
}
