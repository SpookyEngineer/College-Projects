#include <iostream>
using namespace std;

int main()
{
	int matrix[3][3], i, j;
	float average;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Matrix = ";
			cin >> matrix[i][j];
			average += matrix[i][j];
		}
	}
	average = average / 9;
	for (i = 0; i < 3; i++)
	{
		cout << endl;
		for (j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
	}
	cout << endl
		 << "The average of the matrix is: " << average << endl;

	return 0;
}
