//3.   	Write a Program to perform merge sort in C. 
#include <stdio.h>
int main() {
    int arr[100], temp[100], n, i, j, k, size, l1, h1, l2, h2;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (size = 1; size < n; size = size * 2) {
        for (l1 = 0; l1 < n - 1; l1 += 2 * size) {
            h1 = l1 + size - 1;
            l2 = h1 + 1;
            h2 = l2 + size - 1;
            if (h2 >= n) 
                h2 = n - 1;
            i = l1;
            j = l2;
            k = l1;
            for (; i <= h1 && j <= h2; k++) {
                if (arr[i] <= arr[j]) {
                    temp[k] = arr[i];  
                    i++;
                } else {
                    temp[k] = arr[j];
                    j++;
                }
            }
            
            for (; i <= h1; i++, k++) {
                temp[k] = arr[i];
            }
            for (; j <= h2; j++, k++) {
                temp[k] = arr[j];  
            }
            for (i = l1; i <= h2; i++) {
                arr[i] = temp[i];
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}






