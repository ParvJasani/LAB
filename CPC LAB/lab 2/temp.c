#include<stdio.h>
#include<math.h>
int main()
{
    float F;
    printf("value of fahrenhrit:");
    scanf("%f",&F);

    float c = ((F-32)*5)/9;
    printf("The temperature in celsius is = %f", c);
    return 0;
}