#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' :
            (score >= 50) ? 'E' : 'F';

    printf("Grade: %c\n", grade);

    return 0;
}