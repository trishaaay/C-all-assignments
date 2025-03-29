//13.	Read •a number. Find product after deleting last and second last digit. Input 4358 output 190530  (438*435).
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num1 = num / 100;
    int num2 = num / 10;
    int result = num1 * num2;
    printf("Product after deleting digits: %d\n", result);
    return 0;
}
