//7.	Write a Program to check whether any use given input number is Peterson number or not using user defined function. 
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int isPeterson(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == originalNum);
}
int main() {
    int number;
    printf("Enter a number to check if it's Peterson: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("Please enter a positive number\n");
        return 1;
    }
    if (isPeterson(number)) {
        printf("%d is a Peterson number\n", number);
    } else {
        printf("%d is not a Peterson number\n", number);
    }
    return 0;
}
