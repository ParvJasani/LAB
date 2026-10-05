#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("How Many numbers you want to enter\n");
    scanf("%d",&n);
    float a[n];
    float *p;
    p=&a[n];
    for(i=0;i<n;i++){
        printf("Enter Number\n");
        scanf("%f",p+i);
    }
    for(i=0;i<n;i++){
        printf("Value=%f Address=%d\n",*(p+i),p+i);
    }
    return 0;
}