//17.   Delete second last digit. Let x=2134674 ==213464
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int secondLastDigit = (num / 10) % 10;
    int result = (num / 100) * 10 + (num % 10);
    printf("Number after deleting second last digit: %d\n", result);
    return 0;
}
