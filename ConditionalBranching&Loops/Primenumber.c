#include<stdio.h>
#include<math.h>
int main(){

    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n < 2){
        printf("%d is not a prime number",n);
        return 0;
    }
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            printf("%d is not a prime number",n);
            return 0;
        }
    }
     printf("%d is a prime number",n);
    return 0;
}