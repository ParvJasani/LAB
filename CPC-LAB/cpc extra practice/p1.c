#include<stdio.h>
int main(){
    int i,N,sum=0,n;
    printf("give numbers for do sum");
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;

}