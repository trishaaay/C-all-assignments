//9.   Write program to double the second last digit. Input 23613 output 23623. 10. 
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int secondLastDigit = (num / 10) % 10;
    int result = (num / 100) * 100 + (secondLastDigit * 2) * 10 + (num % 10);
    printf("Number after doubling second last digit: %d\n", result);
    return 0;
}
