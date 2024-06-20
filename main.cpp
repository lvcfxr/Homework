#include <iostream>
#include <limits>

using namespace std;

int main() {

    //    const int rows = 3;
    //    const int cols = 3;
    //    int matrix[rows][cols] = {
    //        {1, 2, 3},
    //        {4, 5, 6},
    //        {7, 8, 9}
    //    };
    //    int vector[cols] = { 1, 2, 3 };
    //    int result[rows] = { 0 };
    //
    //
    //    for (int i = 0; i < rows; ++i) {
    //        for (int j = 0; j < cols; ++j) {
    //            result[i] += matrix[i][j] * vector[j];
    //        }
    //    }
    //
    //
    //    int max_element = std::numeric_limits<int>::min();
    //    for (int i = 0; i < rows; ++i) {
    //        if (result[i] > max_element) {
    //            max_element = result[i];
    //        }
    //    }
    //
    //
    //    cout << "maximum element in the resulting vector is: " << max_element << endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        /*const int rows = 3;
        const int cols = 3;
        int** matrix = new int*[rows];

        for (int i = 0; i < rows; ++i) {
            matrix[i] = new int[cols];
        }


        int init_matrix[rows][cols] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                *(*(matrix + i) + j) = init_matrix[i][j];
            }
        }

        int* vector = new int[cols]{1, 2, 3};
        int* result = new int[rows]{0};


        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                *(result + i) += *(*(matrix + i) + j) * *(vector + j);
            }
        }


        int max_element = std::numeric_limits<int>::min();
        for (int i = 0; i < rows; ++i) {
            if (*(result + i) > max_element) {
                max_element = *(result + i);
            }
        }


        cout << "Maximum element in the resulting vector is: " << max_element << endl;


        for (int i = 0; i < rows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
        delete[] vector;
        delete[] result;*/

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

            /*const int rows = 3;
            const int cols = 3;
            int** matrix = new int* [rows];
            for (int i = 0; i < rows; ++i) {
                matrix[i] = new int[cols];
            }


            int init_matrix[rows][cols] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            };

            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    matrix[i][j] = init_matrix[i][j];
                }
            }

            int* vector = new int[cols] {1, 2, 3};
            int* result = new int[rows] {0};


            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    result[i] += matrix[i][j] * vector[j];
                }
            }


            int max_element = std::numeric_limits<int>::min();
            for (int i = 0; i < rows; ++i) {
                if (result[i] > max_element) {
                    max_element = result[i];
                }
            }


            cout << "Maximum element in the resulting vector is: " << max_element << endl;


            for (int i = 0; i < rows; ++i) {
                delete[] matrix[i];
            }
            delete[] matrix;
            delete[] vector;
            delete[] result;*/

    return 0;
}

