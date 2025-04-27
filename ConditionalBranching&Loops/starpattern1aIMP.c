#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int stars = (i == 0)?1:2*i;
        for(int j=0;j<stars;j++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}