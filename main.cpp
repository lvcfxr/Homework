#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {

		cout << "Enter number: ";
		cin >> arr[i];

	}

	int max_n = arr[0];
	int min_n = arr[0];


	for (int i = 0; i < SIZE; i++) {

		if (max_n < arr[i]) {
			max_n = arr[i];
		}
		if (min_n > arr[i]) {
			min_n = arr[i];
		}
	}

	cout << "\nmax number: " << max_n << "\nmin number: " << min_n << endl;


	return 0;
}