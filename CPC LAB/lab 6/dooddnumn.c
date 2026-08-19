#include<stdio.h>

int main(){
    int n,i;
    i=0;
    n=0;
    printf("GIVE NUMBER N");
    scanf("%d",&n);
    do
    {
        if(i%2!=0){
        printf("%d\n",i);
    }
    i++;
    } while (i<=n);
return 0;
}