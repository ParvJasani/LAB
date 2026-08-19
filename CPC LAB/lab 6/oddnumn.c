#include<stdio.h>

int main(){
    int n,i;
    i=0;
    n=0;
    printf("GIVE NUMBER N");
    scanf("%d",&n);
while (i<=n){
    if(i%2!=0){
        printf("%d\n",i);
    }
    i++;
}
return 0;
}