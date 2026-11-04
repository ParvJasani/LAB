#include<stdio.h>
int main(){
    int n,i,sum=0,max=0,min;
    printf("give number");
    scanf("%d",&n);
    int a[n];
    min=a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("max %d",max);
    printf("min %d",min);
    printf("sum %d",sum);
    printf("avg %d",sum/n);
}