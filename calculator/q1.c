#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int choice;
    int n1, n2;
    
    while (1) {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting the program...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &n1);
        printf("Enter the second number: ");
        scanf("%d", &n2);

        switch (choice) {
            case 1:
                printf("Addition of %d and %d is %d\n", n1, n2, add(n1, n2));
                break;

            case 2:
                printf("Subtraction of %d and %d is %d\n", n1, n2, sub(n1, n2));
                break;

            case 3:
                printf("Multiplication of %d and %d is %d\n", n1, n2, mul(n1, n2));
                break;

            case 4:
                if (n2 != 0)
                    printf("Division of %d and %d is %d\n", n1, n2, divide(n1, n2));
                else
                    printf("Error: Division by zero is not allowed!\n");
                break;

            case 5:
                if (n2 != 0)
                    printf("Modulus of %d and %d is %d\n", n1, n2, mod(n1, n2));
                else
                    printf("Error: Mod by zero is not allowed!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}