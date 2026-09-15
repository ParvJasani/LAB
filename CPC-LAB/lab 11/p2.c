#include<stdio.h>
int main(){
    int n,i,j;
    printf("give the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;i<=j;j--){
            printf("%d",n+1-j);
        }
        printf("\n");
    }
}