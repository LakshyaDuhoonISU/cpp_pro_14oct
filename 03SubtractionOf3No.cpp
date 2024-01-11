// program to subtract three numbers
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, diff;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    diff = a - b - c;
    cout << "Difference: " << diff << endl;
    return 0;
}
