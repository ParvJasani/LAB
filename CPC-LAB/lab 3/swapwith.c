#include<stdio.h>
void main(){
    int a,b,temp;
    printf("type number A ");
    scanf("%d",&a);

    printf("type number B ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("number A is %d\n",a);
    printf("number B is %d",b);
 
}