#include<stdio.h>
#include<string.h>
int main(){

    char str1[25],str2[25];
    printf("Enter str1: ");
    gets(str1);
    printf("Enter str2: ");
    gets(str2);
    int i=0,j = 0;
    char result[100];
    while(str1[i] != '\0'){
        result[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0'){
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
    printf("Concatenated string is : %s",result);
    return 0;
}