#include<stdio.h>
int main(){
    int n,i,countpv=0,countnv=0;
    printf("tell me how many numbers do you have to add");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=0){
            countpv++;
        }
        else{
            countnv++;
        }
    }
    printf("negative numbers=%d\n",countnv);
    printf("positive numbers=%d",countpv);
}