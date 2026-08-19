#include<stdio.h>

int main(){
    int n1,n2,i;
    printf("GIVE NUMBER N1");
    scanf("%d",&n1);
    printf("GIVE NUMBER N2");
    scanf("%d",&n2);
    i=n1;
while(i<n2){
    if(i%2==0){
        printf("%d\n",i);
    }
    i++;
}
    return 0;
}