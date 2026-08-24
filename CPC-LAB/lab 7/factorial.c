#include<stdio.h>

int main(){
    int n,i=1,fac=1;
    printf("give number");
    scanf("%d",&n);
    
    
    while(i<=n){
        fac=i*fac;
        i++;
    }
    printf("%d",fac);
    return 0;
}