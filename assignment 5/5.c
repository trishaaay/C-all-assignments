//5.	Write a Program to copy one string to another string. 
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("Original string: %s\n", str1);
    printf("Copied string: %s\n", str2);
    return 0;
}
