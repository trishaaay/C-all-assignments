/*

     1  
    1 1  
   1 2 1  
  1 3 3 1  
 1 4 6 4 1  

*/
#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
long long binomialCoeff(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main() {
    int N = 5;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%lld ", binomialCoeff(i, j));
        }
        printf("\n");
    }
    return 0;
}
