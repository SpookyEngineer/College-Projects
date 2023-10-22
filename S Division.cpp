#include <iostream>
using namespace std;

int main()
{
	float s, i, j;
	s = 0;
	for (i = 1; i < 100; i += 2)
	{
		for (j = 1; j < 51; j++)
		{
			s = s + (i / j);
			cout << s << endl;
		}
	}

	return 0;
}
