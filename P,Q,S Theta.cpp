#include <iostream>
#include <cmath>
using namespace std;

double i, p, v, q, s, theta;
int op;

int main()
{
	cout << "Enter i: " << endl;
	cin >> i;
	cout << "Enter v: " << endl;
	cin >> v;
	cout << "Enter theta: " << endl;
	cin >> theta;
	cout << "Select the formula you want to use" << endl
		 << "1:(P=v*i*cos(theta)) 2:(Q=v*i*sen(theta)) 3:(S=v*i) 4: P && Q 5: P && S 6: P, Q && S";
	cin >> op;
	switch (op)
	{
	case (1):
	{
		p = v * i * cos(theta); // P
		cout << "The value of P is: " << p;
		break;
	}
	case (2):
	{
		q = v * i * sin(theta); // Q
		cout << "The value of Q is: " << q;
		break;
	}
	case (3):
	{
		s = v * i; // S
		cout << "The value S is: " << s;
		break;
	}
	case (4):
	{
		p = v * i * cos(theta); // P && Q
		cout << "The value of P is: " << p << endl;
		q = v * i * sin(theta);
		cout << "The value of Q is: " << q;
		break;
	}
	case (5):
	{
		p = v * i * cos(theta); // P && S
		cout << "The value of P is: " << p << endl;
		s = v * i;
		cout << "The value S is: " << s;
		break;
	}
	case (6):
	{
		p = v * i * cos(theta); // P, Q && S
		cout << "The value of P is: " << p << endl;
		q = v * i * sin(theta);
		cout << "The value of Q is: " << q << endl;
		s = v * i;
		cout << "The value S is: " << s;
		break;
	}
	}

	return 0;
}
