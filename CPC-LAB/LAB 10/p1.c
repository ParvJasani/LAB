#include<stdio.h>
 int main(){
     int rows,i,j,s;
        printf("give num");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++){
             for(s=0;s<=rows-i;s++){
            printf(" ");
        }
            for(j=1;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
        return 0;
    }