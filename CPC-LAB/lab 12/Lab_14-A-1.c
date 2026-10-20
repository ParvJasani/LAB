#include <stdio.h>
int main()
{
    int i = 0, n=0, j = 0,k=0;
    printf("tell me how many number do you have to add");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    printf("\n");
    for (j = n - 1; j >= 0; j--)
    {
        printf("%d ", a[j]);
    }
}