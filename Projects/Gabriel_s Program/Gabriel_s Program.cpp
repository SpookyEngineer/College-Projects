#include <iostream>
#include <math.h>
#include <locale.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	string login;
	string rtrn;
	string logout;
	int pass;
	int c;
	int d;
	int e;
	int caso;
	int loop;
logout:
	cout << " _                 _            \n";
	cout << "| |               (_)           \n";
	cout << "| |     ___   __ _ _ _ __       \n";
	cout << "| |    / _ \ / _` | | '_ \      \n";
	cout << "| |___| (_) | (_| | | | | |  	\n";
	cout << "|______\___/ \__, |_|_| |_|		\n";
	cout << "               __/ |      		\n";
	cout << "              |___/             \n";
	cout << "\n";
	cout << "WELCOME";
	cout << "\n";
	cout << "Digite abaixo seu login e sua senha.\n";
	cout << "Login:";
	cin >> login;
	cout << "Senha:";
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

	switch (caso)
	{

		int dl;

	case 1:
		cout << "  _____       _          _      _        \n";
		cout << " / ____|     | |        (_)    | |        \n";
		cout << "| |  __  __ _| |__  _ __ _  ___| |       \n";
		cout << "| | |_ |/ _` | '_ \| '__| |/ _ \ |       \n";
		cout << "| |__| | (_| | |_) | |  | |  __/ |   \n";
		cout << " \_____|\__,_|_.__/|_|  |_|\___|_|  \n";
		cout << "\n";
		cout << "BEM VINDO DE VOLTA, DANIEL.\n";
		_sleep(30);
		cout << "O que veio checar hoje?\n";
		_sleep(60);
		cout << "1 - Projetos. \n";
		_sleep(100);
		cout << "2 - Calculadora.\n";
		_sleep(10);
		cout << "3 - Exit. \n";
		cout << "\n";
		cin >> dl;

		switch (dl)
		{

		case 1:
			int proj;

			cout << "\n";
			cout << " Aqui est� a sua lista de projetos no momento: \n";
			_sleep(50);
			cout << "\n";
			cout << "1 - Mini Ventilador USB; \n";
			_sleep(50);
			cout << "\n";
			cout << "Qual projeto voc� deseja examinar? \n";
			_sleep(50);
			cin >> proj;

			switch (proj)
			{

			case 1:

				cout << " __________________________________ \n";
				cout << "|MATERIAIS    -------    QUANTIDADE|\n";
				_sleep(90);
				cout << "|----------------------------------|\n";
				cout << "|Mini Motor      |            3    |\n";
				_sleep(50);
				cout << "|Cabo USB        |            1    |\n";
				cout << "|Interruptor     |            1    |\n";
				cout << "|Potenci�metro   |            1    |\n";
				_sleep(30);
				cout << "|LED verde       |            1    |\n";
				cout << "|Afia��o/Jumper  |            ?    |\n";
				_sleep(120);
				cout << "|Sucata          |            ?    |\n";
				cout << "|__________________________________|\n";
				_sleep(3000);
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
				}
			}
		case 2:
			int x;
			int a;
			int b;
			int sum;
			int difference;
			int mult;
			int div;
			cout << "0 = Addition 1 = Subtraction 2 = Multiplication 3 = Division\n";
			cin >> x;

			if (x == 0)
			{
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
			_sleep(3000);
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
			}
		}
	case 3:
		return 0;
	}
}
