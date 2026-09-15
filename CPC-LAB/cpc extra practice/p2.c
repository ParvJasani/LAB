#include<stdio.h>
int main(){
    int i,n,max=0;
    printf("give numbers you have to input");
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<=a[i]){
            max=a[i];
        }
    }
    printf("%d",max);
}