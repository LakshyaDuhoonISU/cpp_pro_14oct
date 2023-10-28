//program to print ascii values for alphabets
#include<iostream>
using namespace std;
int main()
{
    char alpha[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cout<<"ASCII values of uppercase alphabets: "<<endl;
    for (int i=0;i<26;i++)
    {
        cout<<alpha[i]<<" - "<<int(alpha[i])<<endl;
    }
    return 0;
}