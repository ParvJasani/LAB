#include<stdio.h>
int main(){
    int n,i,sum=0,avg=0,count=0;
    printf("give number");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
        avg=sum/n;
    for(i=0;i<n;i++){
        if(avg<a[i]){
            count++;
        }
    }
    printf("ans=%d",count);
}