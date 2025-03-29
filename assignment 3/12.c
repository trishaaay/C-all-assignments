/*

10001  
01010  
00100  
01010  
10001  

*/
#include <stdio.h>
int main() {
    int N = 5;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == j || j == (N - i + 1)) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
