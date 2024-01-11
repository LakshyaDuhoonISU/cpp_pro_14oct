// program to (a+b+c+d/e * 1/x * 1/y * 1/z)
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, x, y, z;
    double result;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Enter value of d: ";
    cin >> d;
    cout << "Enter value of e: ";
    cin >> e;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "Enter value of z: ";
    cin >> z;
    result = (a + b + c + d / e * 1 / x * 1 / y * 1 / z);
    cout << "Result: " << result << endl;
    return 0;
}
