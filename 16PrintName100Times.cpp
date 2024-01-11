// program to print your name 100 times
#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    for (int i = 1; i <= 100; i++)
    {
        cout << i << ". " << name << endl;
    }
    return 0;
}
