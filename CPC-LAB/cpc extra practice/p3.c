#include<stdio.h>
int main(){
    int n,i=0,j=0;
    printf("give numbers you have to input");
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    printf("\n");
    for(j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
}