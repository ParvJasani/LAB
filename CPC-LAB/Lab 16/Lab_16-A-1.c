#include<stdio.h>

int main(){
    int n,m,i,j;
    printf("tell me how much rows do have to need");
    scanf("%d",&m);
    printf("tell me how much cols do have to need");
    scanf("%d",&n);
    int arr[m][n]; 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}