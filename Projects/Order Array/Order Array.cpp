#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int z, i;
	int temp = 0;
	int array[10];

	cout << "Enter 10 numbers to order them" << endl;

	for (z = 0; z < 10; z++)
	{
		cout << z + 1 << ". Enter number: ";
		cin >> array[z];
	}
	int n = sizeof(array) / sizeof(array[0]);

	sort(array, array + n);

	cout << "The numbers in ascending order: ";

	for (i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}

	return 0;
}
