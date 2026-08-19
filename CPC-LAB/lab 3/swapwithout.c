#include<stdio.h>

int main(){
    int a,b;

    printf("type number A ");
    scanf("%d",&a);

    printf("type number B ");
    scanf("%d",&b);
 
    a=a+b;
    b=a-b;
    a=a-b;

    printf("number A is %d\n",a);
    printf("number B is %d",b);
 
}