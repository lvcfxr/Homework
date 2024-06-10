#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Coordinates {
private:
    int x;
    int y;
    int z;
public:
    Coordinates() : x(0), y(0), z(0) {}

    Coordinates(int x, int y, int z) : x(x), y(y), z(z) {}

    Coordinates(const Coordinates& other) : x(other.x), y(other.y), z(other.z) {};

    friend void operator<< (std::ostream& out, const Coordinates& other);

    ~Coordinates() {

    }

};

void operator<< (std::ostream& out, const Coordinates& other) {
    out << "x: " << other.x << ' ' << "y: " << other.y << ' ' << "z: " << other.z << endl;
}

int main() {

    Coordinates o1(1, 2, 3);
    Coordinates o2(o1);
    Coordinates o3 = o2;
    Coordinates o4;
    Coordinates o5(o4);


    cout << "first object\n" << o1;
    cout << "second object\n" << o2;
    cout << "third object\n" << o3;
    cout << "fourth object\n" << o4;
    cout << "fifth object\n" << o5;


    return 0;
}
