#include <stdio.h>

int main() {
    char str[100];
    int a, b, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    a = 0;
    b = length - 1;

    while (a < b) {
        if (str[a] != str[b]) {
            flag = 0;
            break;
        }
        a++;
        b--;
    }

    if (flag)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
