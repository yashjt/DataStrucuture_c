#include <stdio.h>

int taylor(int x, int n)
{
    static int p = 1, f = 1;
    int r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylor(x, n - 1);
        p = p * x;
        f = f * n;
    }
    return r + p / f;
}

int taylor_rec(int x, int n)
{
    static int s = 1;
    if (n == 0)
    {
        return s;
    }
    s = 1 + x / n * s;
    return taylor_rec(x, n - 1);
}

int taylor_it(int x, int n)
{
    int s = 1;
    for (n = 0; n > 0; n--)
    {
        s = 1 + x / n * s;
    }
    return s;
}
int main()
{
    int x = 3;
    int n = 2;
    int r;
    r = taylor(x, n);
    int r1, r2;
    printf("Orignal \n %d", r);
    r1 = taylor_rec(x, n);
    printf("Recursion \n %d", r1);
    printf("\n");
    r2 = taylor_rec(x, n);
    printf("iterative \n %d", r2);
    return 0;
}