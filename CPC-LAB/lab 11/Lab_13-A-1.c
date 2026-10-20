#include<stdio.h>
 int main(){
     int rows,i,j;
        printf("give num");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++){
            for(j=rows-i;j>=0;j--){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }