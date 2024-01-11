// program to find reverse of a number using a for loop
#include <iostream>
using namespace std;
int main()
{
    int n, r, s = 0;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = n; i != 0; i /= 10)
    {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    cout << "Reversed Number: " << s << endl;
    return 0;
}
