/*

1  
12  
123  
1234  
12345  

*/
#include <stdio.h>
int main() {
    int N = 5;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
