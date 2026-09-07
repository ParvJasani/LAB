#include<stdio.h>
int main(){
    int n=0,i,sum=0;
    printf("give number n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}