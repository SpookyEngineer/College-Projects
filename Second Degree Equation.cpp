#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float delta;

	cout << "Write the first number\n";
	cin >> a;
	cout << "Write the second number\n";
	cin >> b;
	cout << "Write the third number\n";
	cin >> c;

	delta = pow(b, 2) - 4 * a * c;

	if (delta >= 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);

		cout << "The solutions are:\n";
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else
	{
		cout << "No real solutions. Delta is negative.\n";
	}

	return 0;
}
