// 19. 	Exchange last and third last digit. 2134476.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int thirdLastDigit = (num / 100) % 10;
    int temp = num / 10;
    temp = temp / 10;
    temp = temp / 10;
    int result = temp * 1000 + lastDigit * 100 + ((num/10) % 10) * 10 + thirdLastDigit;
    printf("Number after exchanging last and third last digit: %d\n", result);
    return 0;
}
