//1. 	Write a Program to add three numbers using function. 
#include <stdio.h>
int addThreeNumbers(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = addThreeNumbers(num1, num2, num3);
    printf("Sum of %d, %d and %d is: %d\n", num1, num2, num3, sum);
    return 0;
}
