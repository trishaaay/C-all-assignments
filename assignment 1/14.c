//14.	Read two numbers. Find their product after exchanging last digits. Input 4270 and 153 output 640950 (4273<150). Input348 and 31 output 12958 (341*38).
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    int lastDigit1 = num1 % 10;
    int lastDigit2 = num2 % 10;
    int newNum1 = (num1 / 10) * 10 + lastDigit2;
    int newNum2 = (num2 / 10) * 10 + lastDigit1;
    int result = newNum1 * newNum2;
    printf("Product after exchanging last digits: %d\n", result);
    return 0;
}
