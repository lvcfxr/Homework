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

    int length() const {
        return str.size();
    }

    void clear() {
        str.clear();
    }

    const string& strGet() const {
        return str;
    }

    void print() const {
        cout << str << endl;
    }

    friend Str operator+(const Str& other, const string& user_input);
    friend Str& operator+=(Str& other, const string& user_input);
    friend bool operator==(const Str& other, const string& user_input);
    friend bool operator!=(const Str& other, const string& user_input);

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
    Str s1("Hello");
    Str s2("World");
    Str s3;

    s3 = s1;
    s3.print();

    Str s4 = s1 + " " + s2.strGet();
    s4.print();

    s1 += " C++";
    s1.print();

    if (s1 == "Hello C++") {
        cout << "s1 is equal to 'Hello C++'" << endl;
    }

    if (s1 != s2.strGet()) {
        cout << "s1 is not equal to s2" << endl;
    }

    cout << "Length of s1: " << s1.length() << endl;

    s1.clear();
    s1.print();

    return 0;
}
