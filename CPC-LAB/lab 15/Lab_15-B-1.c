#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("give num");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("total duplicate numbers are %d",count);
}