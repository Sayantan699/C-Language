#include<stdio.h>
int main(){

    for(int i=1;i<=4;i++){
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for(char j=0;j<i;j++){
            printf(" %c",'W'+j);
        }
        printf("\n");
    }

    for(int i=3;i>=1;i--){
        for(int k=1;k<=4-i;k++){
            printf(" ");
        }
        for(char j=0;j<i;j++){
            printf(" %c",'W'+j);
        }
        printf("\n");
    }


    return 0;
}