#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "Enter your age\n";
	cin >> a;
	if (a >= 5 && a <= 7)
	{
		cout << "Classification: Infantil A";
	}
	if (a >= 8 && a <= 10)
	{
		cout << "Classification: Infantil B";
	}
	if (a >= 11 && a <= 13)
	{
		cout << "Classification: Juvenil A";
	}
	if (a >= 14 && a <= 17)
	{
		cout << "Classification: Juvenil B";
	}
	if (a >= 18)
	{
		cout << "Classification: Adulto";
	}

	return 0;
}
