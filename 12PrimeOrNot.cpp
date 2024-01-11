// program to check if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    bool prime = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << n << " is neither prime nor not prime." << endl;
    }
    else if (n < 0)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime == true)
        {
            cout << n << " is a prime number." << endl;
        }
        else
        {
            cout << n << " is not a prime number." << endl;
        }
    }
    return 0;
}
