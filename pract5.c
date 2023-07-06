#include <stdio.h>

int countSequences(int n) {
    // Create an array dp to store intermediate results
    int dp[n + 1];

    // Base values for calculations
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    // Compute sequences for n > 2
    for (int i = 3; i <= n; i++) {
        // Formula for the recurrence relation for dp[i]
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }

    // Return the value of dp[n] as the result
    return dp[n];
}

int main() {
    int n;

    // Prompt for entering the length of the sequence
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    // Call the countSequences function to compute the number of sequences
    int result = countSequences(n);

    // Output the result
    printf("The number of desired sequences: %d\n", result);

    return 0;
}