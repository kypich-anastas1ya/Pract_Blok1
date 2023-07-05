#include <stdio.h>

int bin(int a) {
    // Base case 1: If there is only 1 digit, there are 2 possible numbers (5 or 9)
    if (a == 1)
        return 2;
    //Base case 2: If there are 2 digits, there are 4 possible numbers (55, 59, 95, 99)
    if (a == 2)
        return 4;

    // Calculation of the number of numbers with the specified digit
    return bin(a - 1) + bin(a - 2);
}

int main() {
    int p;
    printf("Enter the number of digits (p <= 30): ");
    scanf("%d", &p);

    if (p > 30) {
        printf("Error! Number of digits exceeds 30.\n");
        return 0;
    }

    // Calculate and print the result
    printf("%d\n", bin(p));
    return 0;
}

