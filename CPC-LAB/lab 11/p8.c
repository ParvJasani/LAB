#include<stdio.h>
 int main(){
     int rows,i,j,s;
        printf("give num");
        scanf("%d",&rows);
        for(i=1;i<=rows;i++){
             for(s=1;s<=rows-i;s++){
            printf(" ");
             }
            for(j=1;j<=i;j++){
                if(i%2==0){
                    printf("%c ",64+j);
                }
                else{
                    printf("%d ",j);
                }
            }
            printf("\n");
        }
        return 0;
    }