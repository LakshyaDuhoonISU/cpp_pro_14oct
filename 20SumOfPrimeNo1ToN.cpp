// program to calculate sum of all prime numbers between 1 and N
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int counter = 0, sum = 0;
    if (n == 0 || n == 1)
    {
        cout << n << " is neither prime nor composite, therefore sum is 0" << endl;
    }
    else if (n < 0)
    {
        cout << "Invalid number" << endl;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            counter = 0;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    counter++;
                }
            }
            if (counter == 0)
            {
                sum += i;
            }
        }
    }
    cout << "Sum of prime numbers between 1 and " << n << " is: " << sum << endl;
    return 0;
}
