// program to check whether a given number is an armstrong or not using a for loop
#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, remainder, n = 0, result = 0, power;
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        power = 1;
        for (int i = 0; i < n; i++)
        {
            power = power * remainder;
        }
        result += power;
        originalNum /= 10;
    }

    if (result == num)
    {
        cout << num << " is an Armstrong number.";
    }
    else
    {
        cout << num << " is not an Armstrong number.";
    }
    return 0;
}
