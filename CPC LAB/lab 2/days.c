#include<stdio.h>
#include<math.h>

int main(){
    int a,Years,Weeks,Days;
    printf("give days\n");
    scanf("%d",&a);

    Years = a/365;
    Weeks = (a%365)/7;
    Days =((a%365)%7);

    printf("Years=%d\n",Years);
    printf("Weeks=%d\n",Weeks);
    printf("Days=%d\n",Days);

    return 0;
}