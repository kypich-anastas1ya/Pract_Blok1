#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a natural number (1 < n < 150): ");
    scanf("%d", &n);

    // Check if the input number is within the specified range
    if (n <= 1 || n >= 150) {
        printf("Invalid input! Please enter a natural number between 1 and 150.\n");
        return 0;
    

    // Iterate from 1 to n and count the equal divisors
    for (int m = 1; m <= n; m++) {
        // Check if the condition for an equal divisor is met: n % m == n / m
        if (n % m == n / m) {
            count++;
        }
    }
}
    // Output the number of equal divisors
    printf("Number of equal divisors: %d\n", count);

    return 0;
}
