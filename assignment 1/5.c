//5.	Write program to delete last two digits. input -13613 output 136. input 324 output 3.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = num / 100;
    printf("Number after deleting last two digits: %d\n", result);
    return 0;
}
