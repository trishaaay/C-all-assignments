//16.	Find second last digit. Let x=2134674 the second •last digit is 7.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int secondLastDigit = (num / 10) % 10;
    printf("Second last digit is: %d\n", secondLastDigit);
    return 0;
}
