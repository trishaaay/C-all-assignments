//6.   	Write a Program to print the Ackermann function with recursion
#include <stdio.h>
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    }
    else if (n == 0) {
        return ackermann(m - 1, 1);
    }
    else {
        return ackermann(m - 1, ackermann(m, n - 1));
    } 
}
int main() {
    int m, n;
    printf("Enter two non-negative integers m and n: ");
    scanf("%d %d", &m, &n);
    if (m < 0 || n < 0) {
        printf("Please enter non-negative integers only.\n");
        return 1;
    }
    printf("A(%d,%d) = %d\n", m, n, ackermann(m, n));
    return 0;
}
