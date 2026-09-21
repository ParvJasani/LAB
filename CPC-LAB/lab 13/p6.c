#include<stdio.h>
int main(){

    char ch[10000000];           //parv
    int i,length=0;

    printf("enter string ");       //ch[0]=p, ch[1]=a, ch[2]=r, ch[3]=v,
    scanf("%s",&ch);
    printf("string = %s\n",ch);

    for(i=0;ch[i] !=0;i++){
        length++;
    }
    printf("length = %d",length);
    return 0;
}