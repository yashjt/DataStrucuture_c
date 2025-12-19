#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nThe all elements are\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}
int main()
{
    struct Array arr;
    int n;
    printf("Enter the size of Array");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;
    printf("Enter how many numbers");
    scanf("%d ", &n);

    printf("Enter All the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr.A[i]);
    }

    arr.length = n;

    Display(arr);
    return 0;
}