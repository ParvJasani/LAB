#include<stdio.h>

int main(){
    int a=0,i=2;
    printf("give number");
    scanf("%d",&a);

    while(i<a){
        if(a%i==0){
            printf("not a prime");
            break;
        }
        else{
            printf("prime");
        }
        i++;
    }
    return 0;
}