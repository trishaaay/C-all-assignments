//2.  	Write a Program to read a text file containing subject and marks of a student and calculate his average marks. 
#include <stdio.h>
int main() {
    FILE *file;
    char subject[50];
    float marks, sum = 0;
    int count = 0;
    file = fopen("marks.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Reading marks from file:\n");
    while (fscanf(file, "%s %f", subject, &marks) == 2) {
        printf("%s: %.2f\n", subject, marks);
        sum += marks;
        count++;
    }
    if (count > 0) {
        float average = sum / count;
        printf("\nAverage marks: %.2f\n", average);
    } else {
        printf("\nNo marks found in the file!\n");
    }
    fclose(file);
    return 0;
}
