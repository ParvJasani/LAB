#include<stdio.h>
int main(){
    int n,i;
    float sum=0.0,avg=0.0,count=0.0,mul=1.0,gp,div=0.0,hp=0.0,finalhp=0.0;
    printf("give number");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++){
        mul=mul*a[i];
    }
    gp=mul/n;
    for(i=0;i<n;i++){
        div=1.0/a[i];
        hp=hp+div;
    }
    finalhp=n/hp;
    printf("avg=%f",avg);
    printf("gp=%f",gp);
    printf("hp=%f",finalhp);
}