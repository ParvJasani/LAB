#include<stdio.h>

int main(){
    int num;
    printf("ENTER A NUMBER ");
    scanf("%d",&num);

    if(num>=0){
        printf("number is positive");
    }
    else{
        printf("number is negative");
    }
    return 0;
}