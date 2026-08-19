#include<stdio.h>
#include<math.h>

int main(){
    int num,rem;
    printf("ENTER A NUMBER");
    scanf("%d",&num);

    rem = num % 10;

    if(rem%2==0){
        printf("%d is even number",rem);
    }
    else{
        printf("%d is odd nummber",rem);
    }
    return 0;
}