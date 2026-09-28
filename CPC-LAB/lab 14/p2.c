#include<stdio.h>

int main(){
    int n,m,i,j,countp=0,countn=0,count0=0;
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
            if(arr[i][j]>0){
                countp++;
            }
            else if(arr[i][j]<0){
                countn++;
            }
            else{
                count0++;
            }
        }
    }
        printf("positive numbers=%d \n",countp);
        printf("nagative numbers=%d \n",countn);
        printf("zero numbers=%d \n",count0);
}