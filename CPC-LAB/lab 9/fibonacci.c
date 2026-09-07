#include<stdio.h>
int main(){
    int n,sum=0,i,n1=0,n2=1;
    printf("give the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",sum);
        sum=n1+n2;
        n1=n2;
        n2=sum;
    }
    return 0;
}
