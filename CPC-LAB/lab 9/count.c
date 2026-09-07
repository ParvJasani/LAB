#include<stdio.h>
int main(){
    int i,n,n1,count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
    printf("give number n:");
    scanf("%d",&n1);
    for(i=1;n!=0;i++){
        n=n1%10;
        n1=n1/10;
    if(n==0){
        count0++;
    }
    else if(n==1){
        count1++;
    }
    else if(n==2){
        count2++;
    }
    else if(n==3){
        count3++;
    }
    else if(n==4){
        count4++;
    }
    else if(n==5){
        count5++;
    }
    else if(n==6){
        count6++;
    }
    else if(n==7){
        count7++;
    }
    else if(n==8){
        count8++;
    }
    else if(n==9){
        count9++;
    }
}
printf("number of 0 is%d\n",count0);
printf("number of 1 is%d\n",count1);
printf("number of 2 is%d\n",count2);
printf("number of 3 is%d\n",count3);
printf("number of 4 is%d\n",count4);
printf("number of 5 is%d\n",count5);
printf("number of 6 is%d\n",count6);
printf("number of 7 is%d\n",count7);
printf("number of 8 is%d\n",count8);
printf("number of 9 is%d\n",count9);
return 0;

}