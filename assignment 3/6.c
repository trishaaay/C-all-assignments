/*

*******
 *****  
  ***  
   *  

*/
#include <stdio.h>
int main() {
    int N = 4;
    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
