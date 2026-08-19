#include<stdio.h>

int main(){
    int a,b,c;
    printf("GIVE NUMBER A");
    scanf("%d",&a);

    printf("GIVE NUMBER B");
    scanf("%d",&b);

    printf("GIVE NUMBER C");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("A is the largest number ");
    }
    else if(b>a && b>c){
        printf("B is the largest number ");
    }
    else{
        printf("C is the largest number ");
    }
    return 0;
}