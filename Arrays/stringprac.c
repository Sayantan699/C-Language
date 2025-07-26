#include<stdio.h>
#include<string.h>
int main(){
    //char string[6] = {'I','N','D','I','A','\0'};
    char string[] = "INDIA";
    strrev(string);
    printf("%s",string);
    return 0;
}