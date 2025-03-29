//7.    Program to find the sum of last two digits. For above input output 1+3=4 and 2+7=9,
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int secondLastDigit = (num / 10) % 10;
    int sum = lastDigit + secondLastDigit;
    printf("Sum of last two digits: %d\n", sum);
    return 0;
}
