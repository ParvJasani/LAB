#include<stdio.h>
int find(char str1[],char ch);

int main(){
    char str1[100],ch;
    printf("give string s:");
    gets(str1);

    printf("give char ");
    scanf("%c",&ch);

    find(str1,ch);
}
int find(char str1[],char ch){
    int i;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]==ch){
            printf("%d    ",i+1);
            break;
        }
        
    }
}