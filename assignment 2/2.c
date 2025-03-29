//2.	Write program, which reads x1, y1, x2 and y2 and finds distance between points (x1,y1) and (x2,y2). input 3, 7, 11, 13 output 10.  
#include <stdio.h>
#include <math.h>
int main() {
    int x1, y1, x2, y2;
    float distance;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between points = %.0f\n", distance);
    return 0;
}
