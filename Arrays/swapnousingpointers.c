#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Before swap: x = %d, y = %d\n", a, b);
    swap(&a,&b);
    printf("After swap: x = %d, y = %d\n", a, b);
    return 0;
}