// program to find sum of digits of a number using a for loop
#include <iostream>
using namespace std;
int main()
{
    int n, r, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i != 0; i /= 10)
    {
        r = n % 10;
        sum += r;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}