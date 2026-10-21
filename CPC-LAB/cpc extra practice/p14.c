//strcat
#include<stdio.h>
#include<string.h>

int main(){
    char str1[2000],str2[2000];
    int i,count=0;
    printf("Give the first string\n");
    gets(str1);
    printf("Give the second string\n");
    gets(str2);
    for(i=0;str1[i]!='\0';i++){
        count++;
    }
    for(i=0;str2[i]!='\0';i++){
        str1[i+count]=str2[i];
    }
    str1[i+count]='\0';
    printf("new combined string is\n");
    puts(str1);
    return 0;
}