#include<stdio.h>

int main(){
    int n,m,i1,i2,j1,j2,i,j;
    printf("tell me how much rows do have to need");
    scanf("%d",&m);
    printf("tell me how much cols do have to need");
    scanf("%d",&n);
    int arr[m][n]; 
    int arr2[m][n];
    printf("for 1st matrix\n");
    for(i1=0;i1<m;i1++){
        for(j1=0;j1<n;j1++){
            scanf("%d",&arr[i1][j1]);
        }
    }
    printf("for 2nd matrix");
    for(i1=0;i1<m;i1++){
        for(j1=0;j1<n;j1++){
            scanf("%d",&arr2[i1][j1]);
        }
    }
    for(i1=0;i1<n;i1++){
        for(j1=0;j1<n;j1++){
            printf("sum %d ",arr[i1][j1]+arr2[i1][j1]);
        }
        printf("\n");
    }
}