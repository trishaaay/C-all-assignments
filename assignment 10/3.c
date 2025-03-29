//3. 	Write a Program to write into a file. 
#include <stdio.h>
int main() {
    FILE *file;
    char text[100];
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, file);
    printf("Text written to file successfully!\n");
    fclose(file);
    return 0;
}

