#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("give the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n-1;k++){
                    arr[j]=arr[j+1];
                }
                n--;     
                j--;
            }
            
        }
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}