#include<stdio.h>

int main(){
    int i,n,countodd=0,counteven=0;
    i=0;
    n=10;
    while (i<=n)
    {
        printf("give num");
        scanf("%d",&i);
        if(i%2==0){
            counteven=counteven+1;
        }
        else{
            countodd=countodd+1;
        }
    }
    printf("odd numbers %d",countodd);
    printf("even numbers %d",counteven);

    return 0;
}