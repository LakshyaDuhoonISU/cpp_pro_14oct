// program to calculate discount based on purchase amount
#include <iostream>
using namespace std;
int main()
{
    float purchase;
    cout << "Enter purchase amount: ";
    cin >> purchase;
    if (purchase <= 10000)
    {
        cout << "5% Discount applied." << endl
             << "Discount: " << (purchase * 0.05) << endl
             << "Updated amount: " << (purchase * (1 - 0.05)) << endl;
    }
    else if (purchase > 10000 and purchase <= 25000)
    {
        cout << "14% Discount applied" << endl
             << "Discount: " << (purchase * 0.14) << endl
             << "Updated amount: " << (purchase * (1 - 0.14)) << endl;
        ;
    }
    else if (purchase > 25000 && purchase <= 50000)
    {
        cout << "16% Discount applied" << endl
             << "Discount: " << (purchase * 0.16) << endl
             << "Updated amount: " << (purchase * (1 - 0.16)) << endl;
        ;
    }
    else
    {
        cout << "20% Discount applied" << endl
             << "Discount: " << (purchase * 0.2) << endl
             << "Updated amount: " << (purchase * (1 - 0.2)) << endl;
        ;
    }
    return 0;
}
