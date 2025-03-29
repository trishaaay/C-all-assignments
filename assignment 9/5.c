//5.   Write a Program to find the factorial of a given number using function and pointers. 
#include <stdio.h>
void factorial(int n, int *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result *= i;
    }
}
int main() {
    int num;
    int fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num, &fact);
    printf("The factorial of %d is %d\n", num, fact);
    return 0;
}
