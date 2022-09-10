#include <stdio.h>
int main() {
    int n, i,b;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("%d != %d", n, n);
    // shows error if the user enters a negative integer
    if (n < 0)
      printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
            b = n-i;
        if (b >0)
            {
            printf(" x %d ", b);
            }
        }
    }
    printf("= %llu", fact);
    return 0;
}
;
