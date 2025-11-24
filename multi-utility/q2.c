#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent;
    float hraAmount, daAmount, taAmount, grossSalary;

    printf("Enter base salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    hraAmount = (hraPercent / 100) * baseSalary;
    daAmount = (daPercent / 100) * baseSalary;
    taAmount = (taPercent / 100) * baseSalary;

    grossSalary = baseSalary + hraAmount + daAmount + taAmount;

    printf("\n--- Salary Breakdown ---\n");
    printf("Base Salary: %.2f\n", baseSalary);
    printf("HRA (%.2f%%): %.2f\n", hraPercent, hraAmount);
    printf("DA (%.2f%%): %.2f\n", daPercent, daAmount);
    printf("TA (%.2f%%): %.2f\n", taPercent, taAmount);
    printf("--------------------------\n");
    printf("Gross Salary = %.2f\n", grossSalary);

    return 0;
}