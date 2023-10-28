// program to find smallest element in an array using a for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
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
    }
    cout << "|" << endl;
    int smallest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest element: " << smallest << endl;
    return 0;
}