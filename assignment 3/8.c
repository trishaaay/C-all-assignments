/*

ABCDE  
 CDEF  
  EFG  
   GH  
    I  

*/
#include <stdio.h>
int main() {
    int N = 4;
    char letter;
    for (int i = 0; i < N; i++) {
        letter = 'A' + i * 2; 
        for (int j = i; j < N; j++) {
            printf("%c", letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}
