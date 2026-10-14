#include<stdio.h>
int fac(int n);
int main(){
    int n;
    printf("give the number for factorial");
    scanf("%d",&n);

    fac(n);
}
int fac(int n){
    int i,fac=1;
    for(i=1;i<=n;i++){
        fac=fac*i;
    }
    printf("%d",fac);
}