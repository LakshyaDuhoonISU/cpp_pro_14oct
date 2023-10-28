// program to determine largest number among three numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is the largest number among three numbers." << endl;
        }
        else
        {
            cout << c << " is the largest number among three numbers." << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the largest number among three numbers." << endl;
        }
        else
        {
            cout << c << " is the largest number among three numbers." << endl;
        }
    }
    return 0;
}