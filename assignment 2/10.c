//10.	Write a Program to find all the Fibonacci numbers for a given range.  
#include <stdio.h>
int main() {
    int lower, upper, first = 0, second = 1, next;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    printf("Fibonacci numbers between %d and %d are: ", lower, upper);
    next = first + second;
    while (next <= upper) {
        if (next >= lower) {
            printf("%d ", next);
        }
        first = second;
        second = next;
        next = first + second;
    }
    printf("\n");
    return 0;
}
