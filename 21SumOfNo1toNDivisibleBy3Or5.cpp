// program to calculate sum of numbers divisible by either 3 or 5 between 1 and N
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
