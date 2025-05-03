// insertion sort
// linear search
#include <iostream>
using namespace std;
int linearSearch(int arr[], int n)
{
    int a;
    cout << "What you have to find :";
    cin >> a;
    for (int i = 0; i < n; i++)
    {   
        if (a == arr[i])
        {
            return i;//return the indenx of matching element
        }
    }
    return -1; //not found
}
int main()
{

    int arr[7];

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter index no.:" << i << " ";
        cin >> arr[i];
    }
    int a = linearSearch(arr, 7);
    cout << a << " is the position of number";
}