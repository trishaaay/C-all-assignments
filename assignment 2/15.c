//15.	Write a program, which reads three integers X, Y and Z and prints Y+Z if X is 0. If X is 1 then Y-Z is printed. If X is 2 then Y*Z is printed. If X is 3 then Y/Z is printed. (use switch) 
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three integers (X Y Z): ");
    scanf("%d %d %d", &x, &y, &z);
    switch(x) {
        case 0:
            printf("Y + Z = %d\n", y + z);
            break;
        case 1:
            printf("Y - Z = %d\n", y - z);
            break;
        case 2:
            printf("Y * Z = %d\n", y * z);
            break;
        case 3:
            if(z != 0) {
                printf("Y / Z = %.2f\n", (float)y / z);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid input for X. Please enter 0, 1, 2, or 3.\n");
    }
    return 0;
}
