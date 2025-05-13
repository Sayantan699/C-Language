#include<stdio.h>
int main(){
    int matrix[10][10];

    int size;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&size);

    
    printf("Enter the elements in the  array:\n");
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("The elements of the original array are:\n");
    for (int i = 0; i < size; i++)
    {
        for(int j=0;j<size;j++){
            printf("%d ",matrix[i][j]);
        }
    }

    printf("\n");

    printf("The diagonal array is:\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                printf("%d ",matrix[i][j]);
            }
            else{
                printf("0 "); // print 0 for rest of the elements...
            }
        }
        printf("\n");
    }

    return 0;
}