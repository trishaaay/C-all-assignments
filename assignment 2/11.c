//11.	Write a Program to find all prime numbers within a given range.  
#include <stdio.h>
int main() {
    int lower, upper, i, j, isPrime;
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for(i = lower; i <= upper; i++) {
        if(i <= 1) continue;
        isPrime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
