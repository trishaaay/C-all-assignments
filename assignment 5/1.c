//1.	Write a Program to accept your name and print your name using string. 
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name is: %s\n", name);
    return 0;
}
