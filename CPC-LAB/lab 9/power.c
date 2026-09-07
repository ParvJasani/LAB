#include<stdio.h>
int main(){
    int x,y,i,ans=1;
    printf("give base X:");
    scanf("%d",&x);
    printf("give power Y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        ans=ans*x;
    }
    printf("answer is %d",ans);
    return 0;
}