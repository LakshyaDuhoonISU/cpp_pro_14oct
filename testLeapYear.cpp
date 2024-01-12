#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a year: ";
    cin >> n;
    if (n%400==0)
    {
        cout<<n<<" is a leap year."<<endl;
    }
    else if (n%100==0)
    {
        cout<<n<<" is not a leap year."<<endl;
    }
    else if (n%4==0)
    {
        cout<<n<<" is a leap year."<<endl;
    }
    else
    {
        cout<<n<<" is not a leap year."<<endl;
    }
    return 0;
}
