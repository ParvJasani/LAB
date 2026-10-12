#include<stdio.h>
void interest(p,r,t);
int main(){
    int p,r,t;
    printf("give principal value");
    scanf("%d",&p);
    printf("give rate value");
    scanf("%d",&r);
    printf("give time period");
    scanf("%d",&t);

    interest(p,r,t);
}
void interest(int p,int r,int t){
    int intr=0;
     intr=p*r*t/100;
    printf("%d",intr);
}