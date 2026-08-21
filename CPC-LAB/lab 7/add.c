#include<stdio.h>

int main(){
    int a;
    printf("give a number A");
    scanf("%d",&a);

    int sumodd=0,sumeven=0,i=0;
    while(i<=a){
        if(i%2!=0){
            sumodd=sumodd+i;
        }
        else{
            sumeven=sumeven-i;
            
        }
        i++;
    }
    printf("%d",sumodd+sumeven);
    return 0;
}