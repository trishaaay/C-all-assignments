/*

A  
AC  
ACE  
ACEG  
ACEGI  

*/
#include <stdio.h>
int main() {
    int N = 5;
    char letter;
    for (int i = 1; i <= N; i++) {
        letter = 'A';
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", letter);
            letter += 2;
        }
        printf("\n");
    } 
    return 0;
}
