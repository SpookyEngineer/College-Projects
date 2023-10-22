#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	int d;
	int m;

	cout << "The grade needed to pass is at least a 6\n";
	cout << "Enter the grade of the first of two exames\n";
	cin >> a;
	cout << "Enter the grade of the second exam\n";
	cin >> b;
	m = (a + b) / 2;

	if (m >= 6)
	{
		cout << "Your grade is " << m << " && you have passed";
	}
	if (m < 6)
	{
		cout << "Your grade is " << m << ", you have not passed && must do another exam to recover your grade\n";
		cout << "Enter the grade of the recovery exam\n";
		cin >> c;
		if (c >= 6)
		{
			cout << "Your new grade is " << c << " && you have passed";
		}
		if (c < 6)
		{
			cout << "Your new grade is " << c << ", unfortunaly you still didn't pass";
		}
	}

	return 0;
}
