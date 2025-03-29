//6.	Write a Program to concatenate two string. 
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcpy(result, str1);
    strcat(result, str2);
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    printf("Concatenated string: %s\n", result);
    return 0;
}
