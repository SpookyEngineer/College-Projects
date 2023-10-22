#include <iostream>
using namespace std;

int main()
{
	float x, input, avg, sum;

	cout << "Enter the grades of the five students" << endl;

	for (x = 1; x <= 5; x++)
	{
		cout << "Enter a grade: " << endl;
		cin >> input;
		sum += input;
	}
	avg = sum / 5;
	cout << "The average is: " << avg;

	return 0;
}
