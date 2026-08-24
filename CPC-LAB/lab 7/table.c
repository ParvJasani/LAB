#include<stdio.h>

int main(){
    int i=0,n,n1;
    printf("give number n");
    scanf("%d",&n);
    while(i<=10){
        n1=n*i;
        printf("%d*%d=%d\n",n,i,n1);
        i++;
    }
    return 0;
}