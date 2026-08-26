#include <stdio.h>
#include <math.h>

float main()
{
    int num;
    num = 100;
    while (num <= 200)
    {
        if (num % 7 == 0 && num % 5 != 0)
        {
            printf("%d\n", num);
        }
        num++;
    }
}