#include <iostream>
#include <string>

using namespace std;

class Str {
private:
    string str;

public:
    Str() : str("") {}

    Str(string str) : str(str) {}

    Str(const Str& other) : str(other.str) {}

    Str& operator=(const Str& other) {
        if (this != &other) {
            str = other.str;
        }
        return *this;
    }

    int count_string() const {
        return str.size();
    }

    void clear() {
        str.clear();
    }

    const string& get_str() const {
        return str;
    }

    friend Str operator+(const Str& other, const string& user_input);
    friend Str& operator+=(Str& other, const string& user_input);
    friend bool operator==(const Str& other, const string& user_input);
    friend bool operator!=(const Str& other, const string& user_input);

    void print() const {
        cout << str << endl;
    }

    ~Str() {}
};

Str operator+(const Str& other, const string& user_input) {
    return Str(other.str + user_input);
}

Str& operator+=(Str& other, const string& user_input) {
    other.str += user_input;
    return other;
}

bool operator==(const Str& other, const string& user_input) {
    return other.str == user_input;
}

bool operator!=(const Str& other, const string& user_input) {
    return !(other == user_input);
}

int main() {
    Str o1("Hello");
    Str o2("World");
    Str o3;

    o3 = o1;
    o3.print();

    
    Str o4 = o1 + " " + o2.get_str(); 
    o4.print();

    o1 += " C++";
    o1.print();

    if (o1 == "Hello C++") {
        cout << "o1 is equal to 'Hello C++'" << endl;
    }

    if (o1 != o2.get_str()) { 
        cout << "o1 is not equal to o2" << endl;
    }

    cout << "Length of o1: " << o1.count_string() << endl;

    o1.clear();
    o1.print();

    return 0;
}
