#include<stdio.h>
int main(){
    int i,n,ans=1;
    printf("give number n:");
    scanf("%d",&n);

    for(i=n;i>0;i--){
        ans=ans*i;
    }
    printf("factorial is %d",ans);
    return 0;
}