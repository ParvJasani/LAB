#include<stdio.h>

int main(){
    int n,m,i,j,count0=0;
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
            if(arr[i][j]==0){
                count0++;
            }
        }
    }
    if(count0>m*n/2){
        printf("it is a sparse matrix");
    }
    else{
        printf("not a sparase matrix");
    }
}
