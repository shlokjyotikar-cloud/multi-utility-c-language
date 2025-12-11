#include <stdio.h>
int main()
{
    int n;
     printf("Enter the array's size: ");
    scanf("%d", &n);

    int a[n];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nNegative elements from an Array: ");
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}