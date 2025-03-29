//2.    Write a Program to swap two numbers using pointers. 
#include <stdio.h>
int main() {
    int num1, num2;
    int *ptr1, *ptr2, temp;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    ptr1 = &num1;
    ptr2 = &num2;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);
    return 0;
}
