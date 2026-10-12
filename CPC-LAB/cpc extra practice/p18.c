#include<stdio.h>
int main(){
    int n,i,count=1,max=0;
    printf("tell the size of array");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
        else{
            if(max<count){
                max=count;
                count=1;
            }
            else{
                count=1;
            }
        }
    }
    printf("=>%d",max);
}