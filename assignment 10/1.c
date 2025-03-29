//1.   	Write a Program to read a text file and display the contents.  
#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    fclose(file);
    return 0;
}
