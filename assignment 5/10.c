//10.	Write a Program to perform binary search of 5 elements taken as user input. 
#include <stdio.h>
int main() {
    int arr[5], i, j, temp, searchElement, found = 0;
    int left = 0, right = 4, mid;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted array: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &searchElement);
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == searchElement) {
            printf("Element %d found at position %d\n", searchElement, mid+1);
            found = 1;
            break;
        }
        else if(arr[mid] < searchElement) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if(!found) {
        printf("Element %d not found in the array\n", searchElement);
    }
    return 0;
}
