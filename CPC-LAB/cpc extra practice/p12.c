#include<stdio.h>
#include<string.h>

int main(){
    char str1[2000],str2[2000];
    int i,count1=0,count2=0,flag;
    printf("Give the first string\n");
    gets(str1);
    printf("Give the second string\n");
    gets(str2);

    for(i=0;str1[i]!='\0';i++){
        count1++;
    }
    for(i=0;str2[i]!='\0';i++){
        count2++;
    }
    if(count1!=count2){
        printf("The size of both string is not same");
        if(count1<count2){
            printf("-ve value");
        }
        else{
            printf("+ve value");
        }
    }
    else{
        for(i=0;str1[i]!='\0';i++){
            if(str1[i]!=str2[i]){
                printf("not a same string");
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("same strings");
        }
    }
}