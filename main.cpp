#include <iostream>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;


class Numbers {
private:
    int m_a, m_b, m_c;

public:
    void setValue(int a, int b, int c) {
        m_a = a;
        m_b = b;
        m_c = c;
    };
    void print() {
        cout << m_a << ' ' << m_b << ' ' << m_c << endl;
    }
    bool isEqual(Numbers& other) {
        return (m_a == other.m_a && m_b == other.m_b && m_c == other.m_c);
    }
};


int main() {

    Numbers point1;
    point1.setValue(3, 4, 5);

    Numbers point2;
    point2.setValue(3, 4, 5);

    if (point1.isEqual(point2))
        cout << "Classes are equal" << endl;
    else
        cout << "Classes are not equal" << endl;

    Numbers point3;
    point3.setValue(7, 8, 9);

    if (point1.isEqual(point3))
        cout << "Classes are equal" << endl;
    else
        cout << "Classes are not equal" << endl;

    return 0;
}
