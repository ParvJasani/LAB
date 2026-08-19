#include<stdio.h>
#include<math.h>

int main(){
    float maths,chem,phy,wd,cpc,per;
    printf("TYPE YOUR MATHS MARKS:\n");
    scanf("%f",&maths);

    printf("TYPE YOUR CHEMISTRY MARKS:\n");
    scanf("%f",&chem);

    printf("TYPE YOUR PHY MARKS:\n");
    scanf("%f",&phy);

    printf("TYPE YOUR WEB DESSING MARKS:\n");
    scanf("%f",&wd);

    printf("TYPE YOUR CPC MARKS:\n");
    scanf("%f",&cpc);

    per = ((maths + chem + phy + wd + cpc)/500)*100;

    if(per<=35 && per>=0){
        printf("YOU ARE FAIL");
    }
    else if(per<=45 && per>=36){
        printf("YOU ARE IN PASS CLASS");
    }
    else if(per<=60 && per>=46){
        printf("YOU ARE IN SECOND CLASS");
    }
    else if(per<=70 && per>=61){
        printf("YOU ARE IN FIRST CLASS");
    }
    else{
        printf("YOU ARE PRAMOTED");

    return 0;
    }



}