//4.	Write a Program to find the length of string. 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length of string: %d\n", strlen(str));
    return 0;
}
