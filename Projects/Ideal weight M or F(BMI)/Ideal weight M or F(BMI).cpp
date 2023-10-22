#include <iostream>
using namespace std;

int main()
{
	int g;
	int h;
	int w;

	cout << "Enter your gender: 0 for male or 1 for female\n";
	cin >> g;
	cout << "Now enter your height in cm\n";
	cin >> h;

	if (g == 0)
	{
		w = (0.727 * h) - 58;
		cout << "Your ideal weight is " << w << "kg";
	}
	if (g == 1)
	{
		w = (0.621 * h) - 44.7;
		cout << "Your ideal weight is " << w << "kg";
	}

	return 0;
}
