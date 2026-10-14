#include <stdio.h>
#include <string.h>

void main()
{
    char s1[100], s2[100];
    int n;
    printf("give string 1\n");
    scanf("%s",s1);
    printf("give string 2\n");
    scanf("%s",s2);

     strcpy(s1,s2);
    printf("%s",s1);
}
