//2.  	Write a Program to implement an array of structures to store the data of multiple students. 
#include <stdio.h>
struct Student {
    char name[50];
    int marks;
};
int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[100];
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks: ");
        scanf("%d", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d\n", students[i].marks);
    }
    return 0;
}
