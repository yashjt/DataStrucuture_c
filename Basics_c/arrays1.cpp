#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int A[n];
    cout << "Enter the elements in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Elements inside of the array are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    cout << "Size of the array is " << endl;
    cout << sizeof(A[n]) << endl;

    return 0;
}