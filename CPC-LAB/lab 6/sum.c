#include<stdio.h>

int main(){
    int n,i,sum=0;
    i=0;
    printf("give a number a");
    scanf("%d",&n);

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}