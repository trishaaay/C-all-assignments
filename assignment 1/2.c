//2.   Finds last digit of a number and deletes the last digit
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int numWithoutLast = num / 10;
    printf("Last digit: %d\n", lastDigit);
    printf("Number after deleting last digit: %d\n", numWithoutLast);
    return 0;
}
