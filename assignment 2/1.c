//1.	Write program, which reads a, b and c as sides of a triangle and prints area. Hint: area = sqrt(  s(s-a)(s-b)(s-c) )  and   s = (a+b+c)/2] [sqrt(x) will find square root]    Input 5  7  10 output 16.24
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    float s, area;
    printf("Enter three sides of triangle (a b c): ");
    scanf("%d %d %d", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle = %.2f\n", area);
    return 0;
}
