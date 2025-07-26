#include<stdio.h>
int main(){

    for(int i=0;i<6;i++){
        int star = (i==0)?1:2*i;
        for(int j=0;j<star;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}