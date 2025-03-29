//3.  	Write a Program to find factorial of a given number using user defined functions as well as recursion function.  
#include <stdio.h>
int factorial(int n);
int factorial_recursive(int n);
int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers\n");
        return 1;
    }
    printf("Factorial using iterative function: %d\n", factorial(num));
    printf("Factorial using recursive function: %d\n", factorial_recursive(num));
    return 0;
}
int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
