#include<stdio.h>
int main(){


    char result[100];
    char str[25],str2[25];
    printf("Enter string1: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter string2: ");
    fgets(str2,sizeof(str2),stdin);
    int i=0,j=0;
    while(str[i] != '\0'){
        result[i] = str[i];
        i++;
    }

    while(str2[j] != '\0'){
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';
    printf("The concatenated string is %s",&result);
    return 0;
}