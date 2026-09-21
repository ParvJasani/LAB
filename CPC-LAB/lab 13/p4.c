#include<stdio.h>
int main(){
    int n,i,num,count=0;
    printf("give the counts of number");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("now tell which number do you have to find");
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(num==a[i]){
            printf("This number is included");
            count++;
            break;
        }
    }
        if(count==0){
            printf("not found");
        }
}