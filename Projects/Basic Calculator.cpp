#include <iostream>
using namespace std;

int main()
{
	int x;
	int a;
	int b;
	int sum;
	int difference;
	int mult;
	int div;

	cout << "0 = Addition 1 = Subtraction 2 = Multlipication 3 = Division\n";
	cin >> x;

	if (x == 0)
	{
		printf("Enter a number\n");
		cout << "Enter a number\n";
		cin >> a;
		cout << "Enter another number\n";
		cin >> b;
		sum = a + b;
		cout << "The answer is :" << sum;
	}
	if (x == 1)
	{
		cout << "Enter a number\n";
		cin >> a;
		cout << "Enter another number\n";
		cin >> b;
		difference = a - b;
		cout << "The answer is :" << difference;
	}
	if (x == 2)
	{
		cout << "Enter a number\n";
		cin >> a;
		cout << "Enter another number\n";
		cin >> b;
		mult = a * b;
		cout << "The answer is :" << mult;
	}
	if (x == 3)
	{
		cout << "Enter a number\n";
		cin >> a;
		cout << "Enter another number\n";
		cin >> b;
		div = a / b;
		cout << "The answer is :" << div;
	}
	return 0;
}
