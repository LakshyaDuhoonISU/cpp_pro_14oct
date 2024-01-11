// program to check if a character is a vowel or a consonant
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;
    if (tolower(a) == 'a' || tolower(a) == 'e' || tolower(a) == 'i' || tolower(a) == 'o' || tolower(a) == 'u')
    {
        cout << a << " is a vowel." << endl;
    }
    else
    {
        cout << a << " is a consonant." << endl;
    }
    return 0;
}
