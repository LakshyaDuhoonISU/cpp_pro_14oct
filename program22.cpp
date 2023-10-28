// program to calculate avg of all given numbers in an array
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout << "Array: |";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << "|" << endl;
    double avg = sum / n;
    cout << "Average of array: " << avg << endl;
    return 0;
}