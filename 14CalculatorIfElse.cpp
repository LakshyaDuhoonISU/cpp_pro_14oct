// program to create a simple calculator using if else
#include <iostream>
using namespace std;
int main()
{
    float a, b;
    int c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
start:
    cout << "Enter 1 for addition" << endl
         << "Enter 2 for subtraction" << endl
         << "Enter 3 for multiplication" << endl
         << "Enter 4 for division" << endl;
    cin >> c;
    if (c == 1)
    {
        cout << "Addition: " << a + b << endl;
        goto start;
    }
    else if (c == 2)
    {
        cout << "Subtraction: " << a - b << endl;
        goto start;
    }
    else if (c == 3)
    {
        cout << "Multiplication: " << a * b << endl;
        goto start;
    }
    else if (c == 4)
    {
        if (a == 0 || b == 0)
        {
            cout << "Division not possible" << endl;
        }
        else
        {
            cout << "Division: " << a / b << endl;
            goto start;
        }
    }
    else
    {
        cout << "Invalid option" << endl;
    }
    return 0;
}
