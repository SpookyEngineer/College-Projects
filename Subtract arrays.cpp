#include <iostream>
using namespace std;

int main()
{

	int arr1[5], arr2[5], arr3[5];
	int i, z, j, a;

	i = 0;
	z = 0;
	cout << "Enter five numbers to define the first array" << endl;
	do
	{
		cout << i + 1 << ": ";
		cin >> arr1[i];
		i++;
	} while (i < 5);
	cout << "Enter five numbers to define the second array" << endl;
	do
	{
		cout << z + 1 << ": ";
		cin >> arr2[z];
		z++;
	} while (z < 5);
	j = 0;
	do
	{
		arr3[j] = arr1[j] - arr2[j];
		j++;
	} while (j < 5);

	a = 0;
	do
	{
		cout << arr3[a];
		a++;
	} while (a < 5);

	return 0;
}
