#include<stdio.h>
int main(){
    int a,e[10];
    float b;
    double c;
    char d;
    printf("Size of int= %lu bytes\n",sizeof(a));
    printf("Size of float= %lu bytes\n",sizeof(b));
    printf("Size of double= %lu bytes\n",sizeof(c));
    printf("Size of char= %lu bytes\n",sizeof(d));
    printf("Size of array with 10 elements= %lu bytes\n",sizeof(e));
    return 0;
}