#include<stdio.h>
#include<string.h>

void main(){
    char s[100];

    printf("give string\n");
    scanf("%s",s);

    strrev(s);
    printf("%s",s);
}