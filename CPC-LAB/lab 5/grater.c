#include<stdio.h>

int main(){
    int a,b,c;
    printf("give number A:");
    scanf("%d",&a);

    printf("give number B:");
    scanf("%d",&b);

    printf("give number c:");
    scanf("%d",&c);

    int max=(a>b && a>c ? a:(b>c && b>a ? b:c));
    printf("%d",max);
    return 0;
}