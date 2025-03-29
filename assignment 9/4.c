//4.   Write a Program to read and display values in a 1-D array using pointers. 
#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[100];
    int *ptr = arr;
    printf("\nEnter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("\nArray elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
