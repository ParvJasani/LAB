#include<stdio.h>
int main(){
    int i,n,temp=0,max=0;
    printf("give numbers you have to input");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++){
        printf("enter your number : ");
        scanf("%d",&a[i]);
    }
    max=a[0];
    temp=a[1];
    for(i=1;i<n;i++)
    {
        if(max<a[i]){
            temp=max;
            max=a[i];
        }
        else if(temp<a[i]){
            temp=a[i];
        }
    }
    printf("%d",temp);
}