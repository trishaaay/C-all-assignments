//8.    Write program to double the last digit. e.g. 23613 > 23616.3244 328. ()ast digit <5)
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int result = (num / 10) * 10 + (lastDigit * 2);
    printf("Number after doubling last digit: %d\n", result);
    return 0;
}
