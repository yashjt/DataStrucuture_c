#include <iostream>
#include <stdio.h>

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}
int static_fun(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return static_fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int r;
    r = static_fun(5);
    printf("%d", r);
    return 0;
}