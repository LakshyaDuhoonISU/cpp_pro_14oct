// program to take three names and print "Hey" name "do you know" another_name "'s college is lovely nothing like" third_name "had"
#include <iostream>
using namespace std;
int main()
{
    string a, b, c;
    cout << "Enter first name: ";
    cin >> a;
    cout << "Enter second name: ";
    cin >> b;
    cout << "Enter third name: ";
    cin >> c;
    cout << "Hey " << a << " Do you know " << b << "'s college is lovely nothing like " << c << " had.";
    return 0;
}
