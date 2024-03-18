#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {

		arr[i] = (rand() % 20) + 1;

	}

	int* max_n = max_element(arr, arr + (size(arr)));
	int* min_n = min_element(arr, arr + (size(arr)));


	for (int i = 0; i < SIZE; i++) {
		if ((i + 1) < SIZE)
			cout << arr[i] << ", ";
		else
			cout << arr[i] << endl;
	}

	cout << "\nmax number: " << *max_n << "\nmin number: " << *min_n << endl;


	return 0;
}