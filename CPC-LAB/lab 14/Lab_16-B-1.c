#include<stdio.h>

int main(){
    int n,m,i1,j1;
    printf("tell me how much rows do have to need");
    scanf("%d",&m);
    printf("tell me how much cols do have to need");
    scanf("%d",&n);
    int arr[m][n]; 
    for(i1=0;i1<m;i1++){
        for(j1=0;j1<n;j1++){
            scanf("%d",&arr[i1][j1]);
        }
    }
    for(j1=0;j1<n;j1++){
        for(i1=0;i1<m;i1++){
            printf("%d ",arr[i1][j1]);
        }
        printf("\n");
    }
    
}
    