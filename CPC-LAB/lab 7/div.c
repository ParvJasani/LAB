#include <stdio.h>

int main()
{
    int bnum, snum, count=0, new=0;
    printf("give BIG number");
    scanf("%d",&bnum);

    printf("give SMALL number");
    scanf("%d",&snum);
    new=snum;
    while (bnum>=new)
    {
        bnum=bnum-snum;
        count=count+1;
    }
        printf("quotient=%d",count);
        printf("remainder=%d",bnum);
    return 0;
}