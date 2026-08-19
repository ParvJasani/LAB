#include<stdio.h>
#include<math.h>

int main(){
    int num,rem,count=0,i,fnm,frm;
    printf("ENTER NUMBER");
    scanf("%d",&num);

    for(; num!=0;){
        rem = num % 10;
        count = count + 1;
        num = num / 10;
    }
    fnm=num;
    for(; fnm!=0 ;){
        frm = frm * count; 
    }
    return 0;
}