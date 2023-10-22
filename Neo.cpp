#include <iostream>
using namespace std;

int matrix[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};

int main()
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            matrix[x][y];
        }
    }

    // showing the matrix on the screen

    for (int x = 0; x < 3; x++) // loop 3 times for three lines
    {
        for (int y = 0; y < 3; y++) // loop for the three elements on the line
        {
            cout << matrix[x][y]; // display the current element out of the array
        }
        cout << endl; // when the inner loop is done, go to a new line
    }

    return 0;
}
