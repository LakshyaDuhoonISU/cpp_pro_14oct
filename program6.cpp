// program to take an input number and check if it's an odd or even number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " is an even number." << endl;
    }
    else
    {
        cout << n << " is an odd number." << endl;
    }
    return 0;
}