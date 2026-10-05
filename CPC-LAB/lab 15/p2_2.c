#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("How Many numbers you want to enter\n");
    scanf("%d",&n);
    char a[n];
    char *p;
    p=&a[n];
    for(i=0;i<n;i++){
        printf("Enter Number");
        scanf("%c",p+i);
    }
    for(i=0;i<n;i++){
        printf("Value=%c Address=%d\n",*(p+i),p+i);
    }
    return 0;
}