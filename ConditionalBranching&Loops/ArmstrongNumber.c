#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int num=n;
    int sum;
    while(num>0){
        int temp = num %10;
        sum +=  temp * temp * temp; //for 3 digit number..
        num /= 10;
    }

    if(sum == n){
        printf("Its an armstrong number");
    }
    else{
        printf("Its not an armstrong number");
    }

    return 0;
}