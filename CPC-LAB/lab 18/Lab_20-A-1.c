#include<stdio.h>
#include<string.h>

int main(){
    char s1[1000],s2[1000];
    printf("Give a string");
    gets(s1);
    strcpy(s2,s1);
    strrev(s1);
    int ans= strcmp(s1,s2);
    if(ans==0){
        printf("its a palidrome ");
    }
    else{
        printf("not a palidrome");
    }

}
