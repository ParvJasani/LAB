#include<stdio.h>
int main(){
    int m,n,i,count=0,max=0;
    
    printf("tell the size of array");
    scanf("%d",&m);
    if(m%2!=0){
        n=m-1;
    }
    else{
        n=m;
    }
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    while(i<n){
        if(arr[i]%2==0 && arr[i+1]%2!=0){
            count=count+2;
            i=i+2;
        }
        else{
            count=1;
            i++;
        }
        if(max<count){
            max=count;
        }
    }
    if(n%2!=0){
        if(arr[n-1]%2==0 & arr[n]%2!=0){
            max++;
        }
    }
    printf("%d",max);
}