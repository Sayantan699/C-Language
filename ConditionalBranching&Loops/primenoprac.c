#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(num < 2){
        printf("The number is not prime..");
        return 0;
    }

    for(int i=2;i<=sqrt(num);i++){
        if(num % i == 0){
            printf("%d is not prime..",num);
            return 0;
        }
    }
    printf("%d is  prime..",num);

    return 0;
}