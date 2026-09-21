#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("tell me how much numbers do you have to type");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<0){
            count++;
        }
    }
    printf("total negative numbers are:%d",count);
}