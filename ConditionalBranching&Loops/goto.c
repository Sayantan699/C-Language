#include<stdio.h>
int main(){

    int num;
    
    printf("Enter the number: ");
    scanf("%d",&num);

    if(num<0)
        goto negative;

    printf("The number is positive..");
    return 0;

    negative:
        printf("The number is negative...");
        return 0;

    
}