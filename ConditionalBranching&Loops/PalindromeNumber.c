#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int n = num;
    int rev = 0;
    while(n != 0){
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }

    if(num == rev)
        printf("%d is palindrome ",num);
    else
         printf("%d is not a palindrome ",num);
    return 0;
}