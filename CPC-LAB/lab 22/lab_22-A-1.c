#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("File.txt","w");

    if(fp == NULL){
        printf("File is not found");
        return 1;
    }
    printf("File created and open successfully");

    fclose(fp);

    printf("\nfile closed suss");

    return 0;
}