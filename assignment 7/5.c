//5. 	Write a Program to display the Fibonacci series for a given range using function. 
#include <stdio.h>
void printFibonacci(int range) {
    int first = 0, second = 1, next;
    printf("Fibonacci Series up to %d terms:\n", range);
    for(int i = 0; i < range; i++) {
        if(i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}
int main() {
    int range;
    printf("Enter the range for Fibonacci series: ");
    scanf("%d", &range);
    if(range <= 0) {
        printf("Please enter a positive number\n");
        return 1;
    }
    printFibonacci(range);
    return 0;
}
