// Find the First Element That Appears Again
// Problem : Given an integer array, find the index of the first element whose value has already appeared earlier.If no value repeats, return -1.
// -----------------------------------------------------------------------------------------------------------------------------------------
//   Example :
//   4 7 2 7 4 9
//   Output : 3
//   Why ? The element 7 at index 3 is the first element encountered whose value appeared earlier,at index 1.
//
#include <stdio.h>
int main()
{
    int i, n, count = 0, ans = -1, var = 0;
    printf("Give the size of array");
    scanf("%d", &n);
    int array[n];
    int ans2 = n;
    for (int i = 0; i < n; i++)
    {
        printf("Give the elements");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count = j - i;
                var = j;
            }
            if (count <= ans2)
            {
                ans = var;
                ans2=count;
            }
        }
    }
    printf("%d", ans);
}