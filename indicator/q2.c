#include <stdio.h>
void printCubes(int *p, int size) {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            int val = *(p + i*size + j);
            printf("%d\t", val * val * val);
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter array's size: ");
    scanf("%d", &size);
    
    int a[size][size];
    
    printf("\nEnter array elements:\n");
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nCubes of all elements:\n");
    printCubes((int *)a, size);
    
    return 0;
}
