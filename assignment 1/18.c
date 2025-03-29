//18.	Exchange last two digits. In the above 2134647
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int secondLastDigit = (num / 10) % 10;
    int result = (num / 100) * 100 + lastDigit * 10 + secondLastDigit;
    printf("Number after exchanging last two digits: %d\n", result);
    return 0;
}
