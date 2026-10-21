#include<stdio.h>
#include<string.h>
void copy(char *p,char *q);
void main(){
    int i;
    char s1[1000],s2[1000];
    printf("give string 1:");
    gets(s1);
    printf("give string 2:");
    gets(s2);

    copy(&s1[0],&s2[0]);

    for(i=0;s2[i]!='\0';i++){
        printf("%c",s1[i]);
    }
}
void copy(char *p,char *q){
    int i,j;
    for(;*q!='\0';){
        *p=*q;
        p++;
        q++;
    }
    *q='\0';
}