#include<stdio.h>
#include<string.h>


int main(){
    char str1[2000],ch;
    int i,count=0;
    printf("Give the first string\n");
    gets(str1);

    printf("Which char position do you have to know");
    scanf("%c",&ch);

    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=ch){
            count++;
        }
        else{
            break;
        }
    }
    printf("your given char is at %d",count+1);
}
