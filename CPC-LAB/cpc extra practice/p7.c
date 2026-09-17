#include<stdio.h>
int main(){
    int n,i,a,b,j,k;
    printf("Tell me how much number do you have to type");
    scanf("%d",&n);
    int parta[n];
    int partb[n];
    for(i=0;i<n;i++){
        scanf("%d",&parta[i]);
    }
        for(j=0;j<=partb[n];j++){
            if(parta[i]==partb[j]){
                
            }
            if(parta[i]!=partb[j]){
                partb[j]=parta[i];
            }
        }
    
    for(k=0;k<=j;k++){
        printf("%d",parta[j]);
    }
}