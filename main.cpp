#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

class MyString {

private:
    string text;
    
public:
    MyString() : text("") {  };

    MyString(const string &text) : text(text) {  };

    void operator()(int index = 0, int user_input = 0) {
        int size = text.size();

        if (user_input == 0) {
            user_input = size;
        }
        
        for (int i = index, j = 0; j < user_input; i++, j++) {
            cout << text[i];
        }
        cout << endl;
    }
    
    string add_elements(string el) {
        text += el;
        return text;
    }

    ~MyString() {

    }
};


int main() {

    MyString string("Hello, world!");
    string(7,6);

    string.add_elements("()");
    string(0, 0);


    return 0;
}
