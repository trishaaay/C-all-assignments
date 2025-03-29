//8.	Write a Program to find the vowels in the given string. 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, vowels = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Vowels in the string are: ");
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%c ", str[i]);
            vowels++;
        }
    }
    printf("\nTotal number of vowels: %d\n", vowels);
    return 0;
}
