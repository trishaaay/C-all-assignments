//11.   Exchange last two digits. 23617>23671. 27845345 —27845354,
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int secondLastDigit = (num / 10) % 10;
    int result = (num / 100) * 100 + (lastDigit * 10) + secondLastDigit;
    printf("Number after exchanging last two digits: %d\n", result);
    return 0;
}
