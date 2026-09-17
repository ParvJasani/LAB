#include<stdio.h>
int main(){
    int n,i=0,counth=0,countw,j;
    printf("tell how many people are there");
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++){
        printf("give %dth person height",i+1);
        scanf("%d",&a[i]);
        printf("give %dth person weight",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>170 && b[i]<50 ){
            counth++;
        }
        
    }
    printf("there are %d person greater then 170 height and more than 50 weight",counth);
    return 0;
}