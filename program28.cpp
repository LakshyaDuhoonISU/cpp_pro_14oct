// program to count the number of vowels in a given string using a for loop
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int vowel = 0;
    cout << "Enter a string: ";
    cin >> str;
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u')
        {
            vowel++;
        }
    }
    cout << "Number of vowels: " << vowel << endl;
    return 0;
}