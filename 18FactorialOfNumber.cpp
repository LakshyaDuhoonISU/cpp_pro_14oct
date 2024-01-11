// program to calculate factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << n << " = " << fact << endl;
    }
    return 0;
}
