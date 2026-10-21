#include<stdio.h>
int num(int arr[],int n);

int main(){
    int n,i;

    printf("give the size of array");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    num(arr,n);
}
int num(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}