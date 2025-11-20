#include <stdio.h>

int sum_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum_rec(n - 1) + n;
}
int sum_it(int n){
    int i ,s = 0;
    for(i = 0; i <=n; i++){
        s = s + i;
    }
    return s;
}

int sum_fo(int n){
    return n * (n + 1) /2;
}
int main()
{

    int r;

    //r = sum_rec(10); Recursion

    //r = sum_it(10); iterative

    r = sum_fo(10);
    printf("%d", r);

    return 0;
}