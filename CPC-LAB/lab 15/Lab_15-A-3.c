#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("tell me how many numbers do you have to add");
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%3==0){
            count++;
        }
    }
    printf("there are %d numbers which devisible by 3",count);
}