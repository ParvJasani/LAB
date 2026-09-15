#include<stdio.h>
int main(){
    int n,i,j,sum,row,count=1;
    printf("give number");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d ",count);
            if(count==1){
                count=0;
            }
            else{
                count=1;
            }
        }
        printf("\n");
    }
}