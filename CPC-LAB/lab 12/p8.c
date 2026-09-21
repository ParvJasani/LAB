#include<stdio.h>
int main(){
    int n,i=0,j,temp=0,k;
    
    printf("tell me that how many numbers do you have to add");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the ascending order of number is:: ");
    for(k=0;k<n;k++){
        printf("%d",a[i]);
    }
    printf("\n");
}