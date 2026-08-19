#include<stdio.h>
#include<math.h>

int main(){
    float maths,chem,phy,wd,cpc,per;

    printf("ENTER YOUR MATHS MARKS\n");
    scanf("%f",&maths);

    printf("ENTER YOUR CHEMISTRY MARKS\n");
    scanf("%f",&chem);

    printf("ENTER YOUR PHYSICS MARKS\n");
    scanf("%f",&phy);

    printf("ENTER YOUR WEB DESIGNING MARKS\n");
    scanf("%f",&wd);

    printf("ENTER YOUR CPC MARKS\n");
    scanf("%f",&cpc);
    
    per = (maths + phy + chem + wd + cpc)/5;

    if(per<=35 && per>=0){
        printf("YOU ARE FAIL");
    }
    else if(per<=50 && per>=36){
        printf("YOU ARE SECOND CASE");
    }
    else if(per<=70 && per>=51){
        printf("YOU ARE FIRST CASE");
    }
    else{
        printf("YOU GET A++++ GRADE");
    }
    return 0;
}