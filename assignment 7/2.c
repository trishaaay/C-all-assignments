//2.  	Write a Program to find X^Y using user defined function
#include <stdio.h>
int power(int x, int y) {
    int result = 1;
    for(int i = 1; i <= y; i++) {
        result *= x;
    }
    return result;
}
int main() {
    int x, y;
    printf("Enter base (X): ");
    scanf("%d", &x);
    printf("Enter exponent (Y): ");
    scanf("%d", &y);
    int result = power(x, y);
    printf("%d raised to power %d is: %d\n", x, y, result);
    return 0;
}
