#include<stdio.h>
#include<math.h>

int main(){
    int a,hours,minutes,seconds;
    printf("give seconds\n");
    scanf("%d",&a);

    hours = a/3600;
    minutes = (a%3600)/60;
    seconds=((a%3600)%60);

    printf("hours=%d\n",hours);
    printf("minutes=%d\n",minutes);
    printf("seconds=%d\n",seconds);

    return 0;
}