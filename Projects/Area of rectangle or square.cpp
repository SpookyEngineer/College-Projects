#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int h;

	cout << "Enter the value of the base in meters\n";
	cin >> b;
	cout << "Enter the value of the hight in meters\n";
	cin >> h;
	a = b * h;

	if (b == h)
	{
		cout << "The area of the square is " << a << " meters";
	}
	if (b < h || b > h)
	{
		cout << "The area of the rectangle is " << a << " meters ";
	}

	return 0;
}
