//1.   	Write a Program to print address of an integer variable. 
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);
    return 0;
}
