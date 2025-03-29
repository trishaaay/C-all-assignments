//20. 	Read one more integer (k) and print kill last digit. Let x=2134674, For k=5 the output is 3.
#include <stdio.h>
int main() {
    int x, k;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter k: ");
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        x = x / 10;
    }
    int lastDigit = x % 10;
    printf("Last digit after removing %d digits: %d\n", k, lastDigit);
    return 0;
}
