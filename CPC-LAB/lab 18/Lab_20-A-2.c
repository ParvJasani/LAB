#include<stdio.h>
#include<string.h>

int main(){
    char s1[1000];
    int i;
    printf("give string");
    gets(s1);

    for(i=0;s1[i]!='\0';i++){
        if((s1[i]>='A' && s1[i]<='Z')||(s1[i]>='a' && s1[i]<='z')||(s1[i]>='0' && s1[i]<='9')){
            printf("%c",s1[i]);
        }
    }
}