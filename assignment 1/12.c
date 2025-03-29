//12.	Exchange the last and the third last digits. 23617 — 23716. 845345 845543. 
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num % 10;
    int thirdLastDigit = (num / 100) % 10;
    int result = num - lastDigit - thirdLastDigit * 100;
    result = result + (lastDigit * 100) + thirdLastDigit;
    printf("Number after exchanging digits: %d\n", result);
    return 0;
}
