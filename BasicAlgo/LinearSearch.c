#include<stdio.h>
int main(){
    int n;
    printf("Enter the no of elements of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in the array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("The original array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int num;
    int flag=0;
    printf("Enter the element to search: ");
    scanf("%d",&num);

    printf("\n");
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            printf("%d is found at index %d \n",num,i);
            flag=1;
            break;
        }
        else
            continue;
    }
    if(!flag)
    printf("%d is not found \n",num);

    return 0;

}