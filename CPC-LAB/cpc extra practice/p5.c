#include<stdio.h>
int main(){
    int i,n,j,temp;
    printf("how many number do you have to add");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("number");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}