#include<stdio.h>

int fac(n);

int main(){
    int a;
    printf("give number for factorial");
    scanf("%d",&a);

    int ans=fac(a);
    printf("%d",ans);
}
int fac(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}