//15.	Write programs for followings without using (% mod). [Hint: to find last digit use x-(x/10)*10.] Assume number x is integer. Lel x=2134674 the last digit is 4. 
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int lastDigit = num - (num/10) * 10;
    printf("Last digit is: %d\n", lastDigit);
    return 0;
}
