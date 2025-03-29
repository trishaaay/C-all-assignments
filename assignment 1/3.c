//3.    Join digit.nnd fl number
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    int result = firstDigit * 10 + lastDigit;
    printf("Number after joining first and last digit: %d\n", result);
    return 0;
}
