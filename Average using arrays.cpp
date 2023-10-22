#include <iostream>
using namespace std;
int main()
{
    int i;
    float num[10], sum = 0.0, average;
    cout << "Enter 10 numbers to calculate the average" << endl;

    for (i = 0; i < 10; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    float min = num[0];
    for (i = 0; i < 10; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    average = sum / 10;
    cout << "Average = " << average << endl;
    cout << "The lowest price is: " << min << endl;

    return 0;
}
