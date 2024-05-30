#include <iostream>
#include <string>
using namespace std;

class Zoo {
private:

    string gender;
    string name;
    int price;
    int count;

public:
    
    Zoo() : gender("none"), name("no name"), price(0), count(0) {}

    
    Zoo(string g, string n, int p, int c) : gender(g), name(n), price(p), count(c) {}

    
    void print() {
        cout << "gender : " << gender << "\nname : " << name << "\nprice : " << price << "\ncount : " << count << endl;
    }

    
    ~Zoo() {}

};

int main() {

    Zoo dog("male", "mike", 100, 2);
    dog.print();

    return 0;
}
