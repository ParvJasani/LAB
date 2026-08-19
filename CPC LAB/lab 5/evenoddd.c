#include<stdio.h>

int main(){
    int a;
    printf("give number A:");
    scanf("%d",&a);

    
    char ans=((a % 2==0) ? (printf("even")) : (printf("odd")));
    printf("%d",ans);
    return 0;
}