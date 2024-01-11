// program to check if a triangle is an equilateral, isoceles, or a scalene triangle
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter length of first side: ";
    cin >> a;
    cout << "Enter length of second side: ";
    cin >> b;
    cout << "Enter length of third side: ";
    cin >> c;
    if (a == b && b == c)
    {
        cout << "It is an equilateral triangle." << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "It is an isoceles triangle." << endl;
    }
    else
    {
        cout << "It is a scalene triangle." << endl;
    }
    return 0;
}
