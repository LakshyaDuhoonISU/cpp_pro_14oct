// program to print a user given name
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Name: " << name << endl;
    return 0;
}