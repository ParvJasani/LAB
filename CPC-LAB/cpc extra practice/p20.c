#include<stdio.h>

int main(){
    int n,count=1;
    int max=0;
    printf("give the size of array");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n-1;i++){
        if(array[i]<=array[i+1]){
            count++;
        }
        else{
            
            if(max<count){
                max=count;
            }
            count=1;
        }
    }
        if(max<count){
                max=count;
            }
    printf("max repeatation %d",max);

}