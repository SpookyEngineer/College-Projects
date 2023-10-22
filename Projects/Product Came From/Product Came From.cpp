#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;
    int y;

    cout << "Type the first number. \n ";
    cin >> a;
    cout << "Type the second number. \n";
    cin >> b;

    y = 3 * a + b;

    if (y <= 20)
    {
        cout << "This product came from Europe";
    }
    if (y >= 21 && y <= 40)
    {
        cout << "This product came from Asia";
    }
    if (y >= 41 && y <= 60)
    {
        cout << "This product came from America";
    }
    if (y >= 61 && y <= 80)
    {
        cout << "This product came from Africa";
    }
    if (y >= 81)
    {
        cout << "This product came from Paraguai";
    }
    return 0;
}
