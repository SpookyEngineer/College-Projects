#include <iostream>
using namespace std;

int main()
{
	int i, j, z, array[4], dubarray[4];

	cout << "Enter five numbers to double them" << endl;

	for (i = 0; i < 5; i++)
	{
		cout << i + 1 << ": ";
		cin >> array[i];
	}
	for (j = 0; j < 5; j++)
	{
		dubarray[j] = array[j] * 2;
	}

	for (z = 0; z < 5; z++)
	{
		cout << dubarray[z] << endl;
	}
	return 0;
}
