#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the array's row size: ");
    scanf("%d", &a);

    printf("Enter the array's column size: ");
    scanf("%d", &b);

    int ar[a][b];

    printf("\nEnter array's elements:\n");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("ar[%d][%d] = ", i, j);
            scanf("%d", &ar[i][j]);
        }
    }

    int row, col;

    printf("\nEnter row number to find sum: ");
    scanf("%d", &row);

    printf("Enter column number to find sum: ");
    scanf("%d", &col);

    int rowSum = 0;
    for(int j = 0; j < b; j++)
    {
        rowSum += ar[row][j];
    }

    int colSum = 0;
    for(int i = 0; i < a; i++)
    {
        colSum += ar[i][col];
    }

    printf("\nSum of row %d = %d\n", row, rowSum);
    printf("Sum of column %d = %d\n", col, colSum);

    return 0;
}