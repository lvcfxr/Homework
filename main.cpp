#include <iostream>
#include <ctime>


using namespace std;

void rectangle() {

    const int x = 5;
    const int y = 5;

    char arr[x][y];

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            arr[i][j] = '*';
            cout << arr[i][j] << ' ';
        }
        cout << "\n";
    }


    
}

int main()
{
    rectangle();

    return 0;
}
