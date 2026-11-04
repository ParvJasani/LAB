#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int chars=0,spaces=0,tabs=0,lines=0;
    fp=fopen("File.txt","w");

    if(fp == NULL){
        printf("File is not found");
        return 1;
    }
    while ((ch=fgetc(fp)) !=EOF)
    {
        chars++;

        if(ch==' '){
            spaces++;
        }
        if(ch=='/t'){
            tabs++;
        }
        if(ch=='/n'){
            lines++;
        }
    }
    printf("charactors = %d\n",chars);
    printf("spaces = %d\n",spaces);
    return 0;
}