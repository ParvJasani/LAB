#include<stdio.h>

int main(){
    int n,unknown,i=1,a=0;
    printf("type how many time do you have to type number");
    scanf("%d",&n);

    while(i<=n){
        printf("give num");
        scanf("%d",&a);

        if(i!=a){
            unknown=i;
        }
        
        i++;   
    }
    if(i==n+1){
        printf("1");
    }
    printf("%d",unknown);
    return 0;
}