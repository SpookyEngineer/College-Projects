#include <iostream>
using namespace std;

int main()
{
	int array[9], i, j, a;
	string z;

	cout << "Enter ten numbers to define the array" << endl;

	for (i = 0; i < 10; i++)
	{
		cout << i + 1 << ": ";
		cin >> array[i];
	}
	cout << "Would you like to check the array? y/n" << endl;
	cin >> z;
	if (z == "y")
	{
		cout << "Which element would you like to confirm? From 0 to 9" << endl;
		cin >> a;
		cout << "The element is: " << array[a];
	}
	else
	{
		return 0;
	}

	return 0;
}
