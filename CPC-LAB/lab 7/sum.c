#include<stdio.h>

int main(){
    int sum=0,n,i=1;
    printf("give number n");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i++;
        
    }
    printf("answer of this sequence=%d",sum);
    return 0;
}