#include<stdio.h>

int main(){
    int x,y,i=1,ans=1;
    printf("give digit x");
    scanf("%d",&x);

    printf("give power y");
    scanf("%d",&y);

    while(i<=y){
        ans=ans*x;
        i++;
    }
    printf("%d",ans);
    return 0;
}