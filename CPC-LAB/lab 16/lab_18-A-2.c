#include<stdio.h>
void max(int a,int b);
int main(){
    int a,b;
    printf("Give number a:");
    scanf("%d",&a);
    printf("Give number b:");
    scanf("%d",&b);
    max(a,b);
}
void max(int a,int b){
    int mx;
    if(a>b){
        mx=a;
    }
    else{
        mx=b;
    }
    printf("max number : %d",mx);
}