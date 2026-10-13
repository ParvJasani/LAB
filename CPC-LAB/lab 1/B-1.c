#include<stdio.h>
#include<math.h>
 int main()
 {
    float intrest,p,roi,tp;
    printf("Give a principal no:");
    scanf("%f",&p);

    printf("Give a rate of interst:");
    scanf("%f",&roi);

    printf("Give a time period:");
    scanf( "%f",&tp );

    intrest = p*roi*tp/100;
    printf("The simple intrest is = %f", intrest);
    return 0;
 }