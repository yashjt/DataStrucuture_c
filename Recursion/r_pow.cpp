#include <stdio.h>

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return pow(m, n - 1) * m;
}

int main()
{
    int r;
    r = pow(3, 4);
    printf("%d", r);
}