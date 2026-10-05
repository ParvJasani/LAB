#include<stdio.h>
int main(){
    int a,b;
    int *p1,*p2,*pvar;
    printf("give number A: ");
    scanf("%d",&a);
    printf("give number B: ");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    pvar=*p1;
    *p1=*p2;
    *p2=pvar;
    printf("number A is %d",*p1);
    printf("number B is %d",*p2);
}