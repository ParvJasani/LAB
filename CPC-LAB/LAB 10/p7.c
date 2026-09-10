#include<stdio.h>
int main(){
    int n,i,j,ans=1;
    float sum=0.0,new=0.0;
    printf("give num");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(j=i;j>0;j--){
            ans=ans*j;
        }
        new=1.0/ans;
        sum=new+sum;
    }
    printf("%f",sum);
    return 0;
}