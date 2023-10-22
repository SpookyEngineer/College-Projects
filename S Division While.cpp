#include <iostream>
using namespace std;

int main()
{
	float s, i, j;
	s = 0;
	i = 1, j = 1;
	while (i < 100)
	{
		while (j < 51)
		{
			s = s + (i / j);
			cout << s << endl;
			i += 2;
			j++;
		}
	}

	return 0;
}
