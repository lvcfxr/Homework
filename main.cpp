#include <iostream>
using namespace std;

int main()
{
	const int places = 50;
	int user_input;


	do {
		cout << "Enter how many passagers there will be: ";
		cin >> user_input;
	} while (user_input < 0);

	int rest = user_input % places;
	int free_space = places - rest;

	cout << free_space << endl;

	return 0;
}