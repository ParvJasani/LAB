#include<stdio.h>

int main(){
    int n=0,rem=0,i=0;
    printf("give number");
    scanf("%d",&n);

    while(n!=0){
        rem=n%10;
        n=n/10;
        printf("%d ",rem);
    }
}