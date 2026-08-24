#include<stdio.h>
int main(){
    int n,num,xor=0,ans;
    printf("give number n");
    scanf("%d",&n);
while(n!=0){
    printf("give number A");
    scanf("%d",&num);
    xor=num^xor;
    n--;
}
printf("%d",xor);
return 0;
}