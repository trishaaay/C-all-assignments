//6.   Write program to print the second last digit. Input 83613 output 1. Input 427 output 2.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int secondLastDigit = (num / 10) % 10;
    printf("Second last digit: %d\n", secondLastDigit);
    return 0;
}