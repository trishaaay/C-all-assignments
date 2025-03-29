//7.	Write a Program to compare two string. 
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal\n");
    }
    else if (result < 0) {
        printf("First string is lexicographically smaller than second string\n");
    }
    else {
        printf("First string is lexicographically greater than second string\n");
    }
    return 0;
}
