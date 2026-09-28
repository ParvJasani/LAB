#include<stdio.h>
int main(){
    int n,i,temp;
    printf("give me the size of array");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        printf("enter value");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}