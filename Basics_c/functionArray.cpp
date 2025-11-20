#include <iostream>
#include <stdio.h>
using namespace std;
void print_array(int *arr, int n)
{
    arr[0] = 15; // changin here also change in the main function array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int *fun(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    // int n = 5;
    // print_array(arr, n);

    int *ptr, sz = 5;
    ptr = fun(sz);
    for (int i = 0; i < 5; i++)
        cout << ptr[i] << endl;
    return 0;
}