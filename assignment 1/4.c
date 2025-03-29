//4.	Write program to delete the last digit. input 13613 output •1361. input 324 output 32.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = num / 10;
    printf("Number after deleting last digit: %d\n", result);
    return 0;
}
