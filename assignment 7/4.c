//4.	Write a Program to find GCD (Greatest Common Divisor) and LCM (Least Common Multiple) of two numbers using recursion. 
#include <stdio.h>
int findGCD(int a, int b) {
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}
int main() {
    int num1, num2;
    printf("Enter two positive numbers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = findGCD(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    int lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
