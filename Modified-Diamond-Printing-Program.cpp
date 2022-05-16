/*(Modified Diamond-Printing Program) Modify the application you wrote in Exercise 5.23 
to read an odd number in the range 1 to 19 to specify the number of rows in the diamond.
Your program should then display a diamond of the appropriate size.(c++ how to program)*/

#include <iostream>
using namespace std;

int main()
{

    int a(0);
    cout << "Enter number : ";
    cin >> a;

    if (a > 1 && a <= 19 && (a % 2 == 1))
    {
        cout << endl;

        for (int x(a); x >= 1; x--)
        {

            for (int y(x); y > 1; y -= 2)
            {
                cout << " ";
            }

            for (int z(a); z >= x; z--)
            {
                if (x % 2 == 1)
                {
                    cout << "*";
                }
            }
            cout << endl;
        }

        cout << endl;

        for (int x(a); x > 1; x--)
        {
            for (int y(a); y >= x; y -= 2)
            {
                cout << " ";
            }

            for (int z(x - 1); z > 1; z--)
            {
                if (x % 2 == 1)
                {
                    cout << "*";
                }
            }

            cout << "\n";
        }
    }
    else
    {
        cout << " Wrong Value \n"
             << " please enter in the range 1 to 19 \n";
    }
}