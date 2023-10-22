#include <iostream>
#include <math.h>
#include <locale.h>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <cmath>
using namespace std;
/* BUGS:

*/
// Classes
class calc
{
public:
	int calculator()
	{
		string x;
		int a;
		int b;
		int sum;
		int difference;
		int mult;
		int div;
		sum = 0;
		difference = 0;
		mult = 0;
		div = 0;

		cout << "Add, Sub, Mult or Div? \n";
		cin >> x;

		if (x == "Add")
		{
			cout << "Enter a number\n";
			cin >> a;
			cout << "Enter another number\n";
			cin >> b;
			sum = a + b;
			cout << "The answer is :" << sum;
		}
		if (x == "Sub")
		{
			cout << "Enter a number\n";
			cin >> a;
			cout << "Enter another number\n";
			cin >> b;
			difference = a - b;
			cout << "The answer is :" << difference;
		}
		if (x == "Mult")
		{
			cout << "Enter a number\n";
			cin >> a;
			cout << "Enter another number\n";
			cin >> b;
			mult = a * b;
			cout << "The answer is :" << mult;
		}
		if (x == "Div")
		{
			cout << "Enter a number\n";
			cin >> a;
			cout << "Enter another number\n";
			cin >> b;
			div = a / b;
			cout << "The answer is :" << div;
		}
	};
};
class cornyJokes
{
public:
	void cJ()
	{
		int cj = rand() % 10; // Generate a random number between 0 and 9.
		if (cj == 0)
		{
			cout << "How does a squid go into battle? Well armed. \n";
		}
		if (cj == 1)
		{
			cout << "How do billboards talk? Sign language. \n";
		}
		if (cj == 2)
		{
			cout << "What do you call a pile of cats? A meow-ntain. \n";
		}
		if (cj == 3)
		{
			cout << "Why did the golfer wear two pairs of pants? In case he got a hole in one. \n";
		}
		if (cj == 4)
		{
			cout << "When is a car not a car? When it turns into a street.  \n";
		}
		if (cj == 5)
		{
			cout << "What's brown && sticky? A stick. \n";
		}
		if (cj == 6)
		{
			cout << "What's E.T. short for? He's got little legs. \n";
		}
		if (cj == 7)
		{
			cout << "Why did Santa study music at college? To improve his rapping skills. \n";
		}
		if (cj == 8)
		{
			cout << "How do snails fight? They slug it out. \n";
		}
		if (cj == 9)
		{
			cout << "Why did the bicycle fall over? Because it was two tired. \n";
		}
	}
};
class ventilador
{
public:
	int venti()
	{
		cout << " __________________________________ \n";
		cout << "|MATERIAIS    -------    QUANTIDADE|\n";
		_sleep(50);
		cout << "|----------------------------------|\n";
		cout << "|Mini Motor      |            3    |\n";
		_sleep(50);
		cout << "|Cabo USB        |            1    |\n";
		cout << "|Interruptor     |            1    |\n";
		cout << "|Potenci�metro   |            1    |\n";
		_sleep(50);
		cout << "|LED verde       |            1    |\n";
		cout << "|Afia��o/Jumper  |            ?    |\n";
		_sleep(50);
		cout << "|Sucata          |            ?    |\n";
		cout << "|__________________________________|\n";
	}
};
class arrayAverage
{
public:
	int aAc()
	{
		int i;
		float num[10], sum = 0.0, average;
		float min = num[0];
		i = 0;
		sum = 0;
		average = 0;
		cout << "Enter 10 numbers to calculate the average" << endl;

		for (i = 0; i < 10; ++i)
		{
			cout << i + 1 << ". Enter number: ";
			cin >> num[i];
			sum += num[i];
		}

		average = sum / 10;
		cout << "Average = " << average << endl;
	}
};
class ageClassification
{
public:
	int ageClas()
	{
		int age;
		age = 0;
		cout << "Enter your age\n";
		cin >> age;
		if (age <= 4)
		{
			cout << "Too young to be classified";
		}
		if (age >= 5 && age <= 7)
		{
			cout << "Classification: Infantil A";
		}
		if (age >= 8 && age <= 10)
		{
			cout << "Classification: Infantil B";
		}
		if (age >= 11 && age <= 13)
		{
			cout << "Classification: Juvenil A";
		}
		if (age >= 14 && age <= 17)
		{
			cout << "Classification: Juvenil B";
		}
		if (age >= 18)
		{
			cout << "Classification: Adulto";
		}
	}
};
class CtoF
{
public:
	int ctofcalc()
	{
		int fer;
		int cel;
		fer = 0;
		cel = 0;
		cout << "Enter the temp in F\n";
		cin >> fer;
		cel = 0.5555555555555556 * (fer - 32);

		if (fer > 600)
		{
			cout << "ERROR: The sensor has a limit of 600C or 1112F";
		}
		if (fer <= 600)
		{
			cout << "The temp in C is " << cel;
		}
	}
};
class PQSTheta
{
public:
	int pqscalc()
	{
		double iT, p, v, q, s, theta;
		int op;
		iT = 0;
		v = 0;
		theta = 0;
		p = 0;
		cout << "Enter i: " << endl;
		cin >> iT;
		cout << "Enter v: " << endl;
		cin >> v;
		cout << "Enter theta: " << endl;
		cin >> theta;
		cout << "Select the formula you want to use" << endl
			 << "1:(P=v*iT*cos(theta)) 2:(Q=v*iT*sen(theta)) 3:(S=v*iT) 4:  && Q)5: P && S 6: P, Q && S\n";
		cin >> op;
		switch (op)
		{
		case (1):
		{
			p = v * iT * cos(theta); // P
			cout << "The value of P is: " << p;
			break;
		}
		case (2):
		{
			q = v * iT * sin(theta); // Q
			cout << "The value of Q is: " << q;
			break;
		}
		case (3):
		{
			s = v * iT; // S
			cout << "The value S is: " << s;
			break;
		}
		case (4):
		{
			p = v * iT * cos(theta); // P && Q
			cout << "The value of P is: " << p << endl;
			q = v * iT * sin(theta);
			cout << "The value of Q is: " << q;
			break;
		}
		case (5):
		{
			p = v * iT * cos(theta); // P && S
			cout << "The value of P is: " << p << endl;
			s = v * iT;
			cout << "The value S is: " << s;
			break;
		}
		case (6):
		{
			p = v * iT * cos(theta); // P, Q && S
			cout << "The value of P is: " << p << endl;
			q = v * iT * sin(theta);
			cout << "The value of Q is: " << q << endl;
			s = v * iT;
			cout << "The value S is: " << s;
			break;
		}
		}
	}
};

int main()
{
	setlocale(LC_ALL, "");

	string login;
	string rtrn;
	string logout;
	int proj;
	int pass;
	int c;
	int d;
	int e;
	int caso;
	int loop;
	int i;
logout:
	cout << " _                 _            \n";
	_sleep(50);
	cout << "| |               (_)           \n";
	_sleep(50);
	cout << "| |     ___   __ _ _ _ __       \n";
	_sleep(50);
	cout << "| |    / _ \\ / _` | | '_ \\      \n";
	_sleep(50);
	cout << "| |___| (_) | (_| | | | | |  	\n";
	_sleep(50);
	cout << "|______\\___/ \\__, |_|_| |_|		\n";
	_sleep(50);
	cout << "              __/ |      		\n";
	_sleep(50);
	cout << "             |___/             \n";
	_sleep(50);
	cout << "\n";
	cout << "WELCOME";
	cout << "\n";
	cout << "Type in your login && password or exit to do so \n";
	cout << "Login:";
	cin >> login;
	if (login == "exit")
	{
		return 0;
	}
	cout << "Password:";
	cin >> pass;

	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
	cout << "\n";
	_sleep(50);
start:
	if ((login == "Gabriel") && (pass == 9563))
	{
		caso = 1;
	}
	else
	{
		cout << "Wrong login or password. Exiting program";
		return 0;
	}

	switch (caso)
	{

		int dl;

	case 1:
		cout << "  _____       _          _      _        \n";
		_sleep(50);
		cout << " / ____|     | |        (_)    | |       \n";
		_sleep(50);
		cout << "| |  __  __ _| |__  _ __ _  ___| |       \n";
		_sleep(50);
		cout << "| | |_ |/ _` | '_ \\| '__| |/ _ \\ |       \n";
		_sleep(50);
		cout << "| |__| | (_| | |_) | |  | |  __/ |       \n";
		_sleep(50);
		cout << " \\_____|\\__,_|_.__/|_|  |_|\\___|_|       \n";
		_sleep(50);
		cout << "\n";
		cout << "Welcome back, Gabriel.\n";
		_sleep(50);
		cout << "What would you like to do today?\n";
		_sleep(50);
		cout << "1 - Projects. \n";
		_sleep(50);
		cout << "2 - Corny Jokes. \n";
		_sleep(50);
		cout << "3 - Exit. \n";
		cout << "\n";
		cin >> dl;

		switch (dl)
		{

		case 1:
			cout << "\n";
			cout << " Here are your current projects: \n";
			_sleep(50);
			cout << "\n";
			cout << "1 - Mini Ventilador USB; \n";
			_sleep(50);
			cout << "2 - Basic Calculator \n";
			_sleep(50);
			cout << "3 - Average 10 numbers using arrays \n";
			_sleep(50);
			cout << "4 - Age classification \n";
			_sleep(50);
			cout << "5 - C to F conversion \n";
			_sleep(50);
			cout << "6 - P,Q,S Theta Calculator \n";
			_sleep(50);
			cout << "\n";
			cout << "Which would you like to open? \n";
			_sleep(50);
			cin >> proj;

			switch (proj)
			{

			case 1:
				ventilador ventiObject;
				ventiObject.venti();
				_sleep(500);
				cout << endl;
				cout << "Would you rather return the menu or logout?" << endl;
				cin >> rtrn;
				if (rtrn == "menu")
				{
					goto start;
				}
				if (rtrn == "logout")
				{
					goto logout;
					break;
				}

			case 2:
				calc calcObject;
				calcObject.calculator();
				_sleep(500);
				cout << endl;
				cout << "Would you rather return the menu or logout?" << endl;
				cin >> rtrn;
				if (rtrn == "menu")
				{
					goto start;
				}
				if (rtrn == "logout")
				{
					goto logout;
					break;
				}

			case 3:
				arrayAverage arrayObject;
				arrayObject.aAc();
				_sleep(500);
				cout << endl;
				cout << "Would you rather return the menu or logout?" << endl;
				cin >> rtrn;
				if (rtrn == "menu")
				{
					goto start;
				}
				if (rtrn == "logout")
				{
					goto logout;
					break;
				}
			case 4:
				ageClassification ageClasObject;
				ageClasObject.ageClas();
				_sleep(500);
				cout << endl;
				cout << "Would you rather return the menu or logout?" << endl;
				cin >> rtrn;
				if (rtrn == "menu")
				{
					goto start;
				}
				if (rtrn == "logout")
				{
					goto logout;
					break;
				}
			case 5:
				CtoF ctofcalcObject;
				ctofcalcObject.ctofcalc();
				_sleep(500);
				cout << endl;
				cout << "Would you rather return the menu or logout?" << endl;
				cin >> rtrn;
				if (rtrn == "menu")
				{
					goto start;
				}
				if (rtrn == "logout")
				{
					goto logout;
					break;
				}
			}
		case 6:
			PQSTheta pqsthetaObject;
			pqsthetaObject.pqscalc();
			_sleep(500);
			cout << endl;
			cout << "Would you rather return the menu or logout?" << endl;
			cin >> rtrn;
			if (rtrn == "menu")
			{
				goto start;
			}
			if (rtrn == "logout")
			{
				goto logout;
				break;
			}

		case 2:
			cornyJokes cJObject;
			cJObject.cJ();
			_sleep(500);
			cout << endl;
			cout << "Would you rather return the menu or logout?" << endl;
			cin >> rtrn;
			if (rtrn == "menu")
			{
				goto start;
			}

			if (rtrn == "logout")
			{
				goto logout;
				break;
			}

		case 3:
			return 0;
		}
	}
}
