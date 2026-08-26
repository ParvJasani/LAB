#include<stdio.h>

int main(){
    int n1,r=0,n2=0;
    printf("give number");
    scanf("%d",&n1);

    while (n1!=0){
    r=n1%10;
    n2=(n2*10)+r;
    n1=n1/10;
}
printf("%d",n2);
return 0;
}