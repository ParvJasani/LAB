#include<stdio.h>
int main(){
    int n,i;
    printf("tell how much number do have to add");
    scanf("%d",&n);
    int a[n],b[n];
    printf("give numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}