// program to generate a calendar of a given month
#include <iostream>
using namespace std;
int main()
{
    int mon, day, days;
    string date[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string month[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
end:
    cout << "Enter month: " << endl
         << "1.January" << endl
         << "2.February" << endl
         << "3.March" << endl
         << "4.April" << endl
         << "5.May" << endl
         << "6.June" << endl
         << "7.July" << endl
         << "8.August" << endl
         << "9.September" << endl
         << "10.October" << endl
         << "11.November" << endl
         << "12.December" << endl;
    cin >> mon;
    if (mon == 2)
    {
        days = 28;
    }
    else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
    {
        days = 31;
    }
    else
    {
        if (mon > 12)
        {
            cout << "Error" << endl;
            goto end;
        }
        days = 30;
    }
start:
    cout << "Enter starting day: " << endl
         << "1.Sunday "
         << "2.Monday "
         << "3.Tuesday "
         << "4.Wednesday "
         << "5.Thursday "
         << "6.Friday "
         << "7.Saturday " << endl;
    cin >> day;
    if (day > 7)
    {
        cout << "Error" << endl;
        goto start;
    }
    for (int i = 0; i < days; i++)
    {
        if (day > 7)
        {
            day = 1;
        }
        cout << i + 1 << " " << month[mon - 1] << " - " << date[day - 1] << endl;
        day++;
    }
    return 0;
}
