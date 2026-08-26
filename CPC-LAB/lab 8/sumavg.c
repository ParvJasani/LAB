#include<stdio.h>
void main(){
    int sum=0.0,avg=0.0,n,count=0;
    int ans;
    while(1){
        printf("type 1 if you have to sum");
        scanf("%d",&ans);
    if(ans==1){
        printf("give number");
        scanf("%d",&n);
        }
    else{
        break;
    }
    count=count+1;
    sum=sum+n;
    avg=sum/count;
    
}
  printf("sum=%d",sum);
  printf("avg=%d",avg);
}