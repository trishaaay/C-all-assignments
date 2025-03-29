//3.	Write program, which reads a, b and c as sides of a triangle and prints whether angle A is 900 or not
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of triangle (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    if (a*a == b*b + c*c) {
        printf("Angle A is 90 degrees\n");
    } else {
        printf("Angle A is not 90 degrees\n");
    }
    return 0;
}
