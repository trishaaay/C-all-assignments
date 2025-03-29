//9.	Write a Program to perform linear search of 5 elements taken as user input. 
#include <stdio.h>
int main() {
    int arr[5], i, searchElement, found = 0;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &searchElement);
    for(i = 0; i < 5; i++) {
        if(arr[i] == searchElement) {
            printf("Element %d found at position %d\n", searchElement, i+1);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element %d not found in the array\n", searchElement);
    }
    return 0;
}
