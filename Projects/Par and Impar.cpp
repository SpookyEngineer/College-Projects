#include <iostream>
#include <windows.h>
using namespace std;

int par = 1;
int soma;

int main()
{
	while (par < 10)
	{
		par = par + 2;
		soma = soma + par;
		if (par < 10)
		{
			cout << par << " + ";
		}
		else
		{
			cout << par << " = ";
		}
	}

	cout << soma;
	return 0;
}
