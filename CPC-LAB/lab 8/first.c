#include<stdio.h>

int main(){
    int num,reminder=0,count=0,last;

    printf("give number");
    scanf("%d",&num);
while(num!=0){
    reminder=num%10;
    num=num/10;
    count=count+1;
    if(count==1){
        last=reminder;
    }
}
int first=reminder;
printf("%d",last+first);
return 0;
}