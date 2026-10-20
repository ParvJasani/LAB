#include<stdio.h>
int main(){
    int rows,i,j,k,p;
    printf("give num");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        if(i==1||i==rows){
            for(k=1;k<=rows;k++){
                printf("* ");
            }
        }
        else{
            for(j=0;j<=rows;j++){
                if(j==1||j==rows){
                printf("* ");
                }
                else{
                    for(p=0;p<j-2;p++){
                        printf(" ");
                    }
                    
                }
            }
            
        }
        printf("\n");
    }
}