#include <iostream>
using namespace std;

int main()
{
	int c;
	int f;

	cout << "Enter the temp in F\n";
	cin >> f;
	c = 0.5555555555555556 * (f - 32);

	if (f > 600)
	{
		cout << "ERROR: The sensor has a limit of 600C or 1112F";
	}
	if (f <= 600)
	{
		cout << "The temp in C is " << c;
	}

	return 0;
}
