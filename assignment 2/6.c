//6.	A student is awarded Ex grade if he gets more than 90 marks. He is awarded A grade if marks are between 80 and 89. Similarly range for B, C, D and P are 70-79, 60-69, 50-59, and 35-49 respectively. The student is awarded F grade if he gets less then 35 marks. Program reads marks of a student and prints his grade. 
#include <stdio.h>
int main() {
    int marks;
    printf("Enter student's marks: ");
    scanf("%d", &marks);
    
    if (marks > 90) {
        printf("Grade: Ex\n");
    }
    else if (marks >= 80 && marks <= 89) {
        printf("Grade: A\n");
    }
    else if (marks >= 70 && marks <= 79) {
        printf("Grade: B\n");
    }
    else if (marks >= 60 && marks <= 69) {
        printf("Grade: C\n");
    }
    else if (marks >= 50 && marks <= 59) {
        printf("Grade: D\n");
    }
    else if (marks >= 35 && marks <= 49) {
        printf("Grade: P\n");
    }
    else {
        printf("Grade: F\n");
    }
    return 0;
}
