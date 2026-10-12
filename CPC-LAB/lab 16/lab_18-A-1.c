#include<stdio.h>
int main(){
    int a,b;
    printf("Give number a:");
    scanf("%d",&a);
    printf("Give number b:");
    scanf("%d",&b);
    int ans=sum(a,b);
    printf("sum of digits are %d",ans);
}
int sum(int a,int b){
    return a+b;
}