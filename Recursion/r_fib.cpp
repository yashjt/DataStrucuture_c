#include <stdio.h>
int fib_i(int n)
{
    int t0 = 0, t1 = 1, s = 0;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

int fib_r(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib_r(n - 2) + fib_r(n - 1);
}

int F[10];
int fib_m(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = fib_m(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = fib_m(n - 1);
        }

        return F[n - 2] + F[n - 1];
    }
}
int main()
{

    printf("%d", fib_m(10));
    return 0;
}