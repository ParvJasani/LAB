#include<stdio.h>
int main(){
    int n,i,j=0,count=0;
    printf("tell me the size of erray");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=i+1){
            b[j]=i+1;
            j++;
            count++;
        }
    }
    printf("missing numbers are "); 
    for(j=0;j<count;j++){
        printf("%d ",b[j]);
    }
}