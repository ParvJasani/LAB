#include<stdio.h>
int main(){
    int n,i,j,sum,row;
    printf("give number");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            sum=sum+1;
            printf("%d ",sum);
        }
        printf("\n");
    }
}