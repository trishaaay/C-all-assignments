//12.	Write a Program to calculate the Factorial of any integer. 
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else {
        for(i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}
