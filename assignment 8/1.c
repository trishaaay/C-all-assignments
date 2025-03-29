//1.   	Write a Program to create a structure called Student to store his/her name, and marks.  
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    struct Student student;
    printf("Enter student name: ");
    scanf("%s", student.name);
    printf("Enter marks: ");
    scanf("%d", &student.marks);
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Marks: %d\n", student.marks);   
    return 0;
}
