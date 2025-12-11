#include <stdio.h>

int main() {
    char str[100];
    int i, j;
    int count;
    
    printf("Enter any string: ");
    scanf("%s", str);

    printf("Frequency of each letter:\n");

    for (i = 0; str[i] != '\0'; i++) {
        count = 1;

        for (j = 0; j < i; j++) {
            if (str[j] == str[i]) {
                count = 0;
                break;
            }
        }

        if (count == 0)
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }

        printf("%c => %d\n", str[i], count);
    }

    return 0;
}
