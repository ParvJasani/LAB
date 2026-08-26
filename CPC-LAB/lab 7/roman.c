#include<stdio.h>

int main(){
    int num=0,remainder,i,count;
    printf("num");
    scanf("%d",&num);
    
    
    while(num!=0){
        remainder=num%10;
        num=num/10;
        count=count+1;
        if(remainder==0){
            printf("ZERO");
        }
        else if(remainder==1){
            printf("ONE");
        }
        else if(remainder==2){
            printf("TWO");
        }
        else if(remainder==3){
            printf("THREE");
        }
        else if(remainder==4){
            printf("FOUR");
        }
        else if(remainder==5){
            printf("FIVE");
        }
        else if(remainder==6){
            printf("SIXTH");
        }
        else if(remainder==7){
            printf("SEVEN");
        }
        else if(remainder==8){
            printf("EIGHT");
        }
        else{
            printf("NINE");
        
        }
    }
    return 0;        
    }

