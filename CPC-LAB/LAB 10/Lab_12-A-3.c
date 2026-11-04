#include<stdio.h>
 int main(){
     int rows,i,j,nrows=0;
        
        printf("give num");
        scanf("%d",&rows);
        nrows=rows+1;
        for(i=1;i<=rows;i++){
            for(j=1;j<=i;j++){
                printf("%d",nrows-j);
            }
            printf("\n");
        }
        return 0;
    }