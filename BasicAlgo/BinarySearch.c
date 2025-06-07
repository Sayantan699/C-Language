#include<stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array in sorted order:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements of the array are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int num, flag = 0;
    printf("Enter the number to be searched: ");
    scanf("%d", &num);

    int start = 0, end = n - 1;
    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] == num) {
            printf("%d is found at index %d\n", num, mid);
            flag = 1;
            break;
        }
        else if(arr[mid] > num) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if(!flag) {
        printf("%d is not found in the array\n", num);
    }

    return 0;
}
