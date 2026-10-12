#include<stdio.h>
int main(){
    int n,i,count=1,max=0,flag=1;
    printf("tell the size of array");
    scanf("%d",&n);

    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        flag=1;
        if(arr[i]>arr[i-1]){
            count++;
        }
        else{
            flag=0;
                count=1;
        }
        if(max<count){
                max=count;
            }
    }
    if(flag){
        printf("=>%d",count);
    }
    else{
    printf("=>%d",max);
    }
}