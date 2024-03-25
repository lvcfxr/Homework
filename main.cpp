#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    const int row = 4;
    const int column = 4;

    int arr[row][column];
    int maxRowSum = 0;
    int maxRowIndex = 0;

    srand(time(0));

    for (int i = 0; i < row; i++) {
        int rowSum[column]{0};
        for (int j = 0; j < column; j++) {
            arr[i][j] = (rand() % 90) + 10;
            cout << arr[i][j] << " ";
            rowSum[i] += arr[i][j];
        }
        cout << "Row Sum: " << rowSum[i] << endl;
        if (rowSum[i] > maxRowSum) {
            maxRowSum = rowSum[i];
            maxRowIndex = i;
        }
    }

    cout << "Row with the maximum sum: " << maxRowIndex + 1 << endl;

    return 0;
}
