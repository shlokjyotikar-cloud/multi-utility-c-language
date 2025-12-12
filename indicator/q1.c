#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    
    printf("Enter any string: ");
    gets(str);
    
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}

