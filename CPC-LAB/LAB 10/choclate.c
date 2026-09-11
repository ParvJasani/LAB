#include<stdio.h>

int main(){
    int price,rupee,k,choco,vraper,newchoco,remindvraper,totalvraper,ans,add;
    printf("TELL HOW MUCH MONEY DO YOU HAVE");
    scanf("%d",&rupee);
    printf("PER CHOCLATE PRICE");
    scanf("%d",&price);
    printf("HOW MUCH WRAPER GIVE ONE CHOCLATE");
    scanf("%d",&k);

    choco=rupee/price;
    vraper=choco;
    add=choco;
    for(;newchoco!=0;){
        newchoco=vraper/k;
        remindvraper=vraper%k;
        totalvraper=newchoco+remindvraper;
        vraper=totalvraper;
        ans=ans+newchoco;
    }
    printf("total choclate %d",ans+add);
}