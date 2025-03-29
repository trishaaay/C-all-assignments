//10. Write program to delete the second last digit. 236174 2367. 23654 235.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = (num / 100) * 10 + (num % 10);
    printf("Number after deleting second last digit: %d\n", result);
    return 0;
}
