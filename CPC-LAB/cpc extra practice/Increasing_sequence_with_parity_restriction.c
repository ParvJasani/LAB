// Increasing sequence with a parity restriction
// Problem: Given an integer array, find the length of the longest contiguous section where:
// Every element is strictly greater than the previous element.
// No two adjacent elements are both odd.
// --------------------------------------------------------------------------------------------------------------------
// Input array:
// 2 4 7 9 12 15
// Output : 3
// Explanation : [ 2, 4, 7 ] is valid.The next element,
// 9, is odd and follows odd 7, so the section breaks.
// -------------------------------------------------------------------------------------------------------------------------------
// Example 2 Input array : 1 2 3 4 5 6
//  Output : 6
//  Explanation : The array is strictly increasing,
// and no two adjacent elements are both odd.
// u
#include <stdio.h>
int main()
{
    int n, count = 0, max = 0;
    printf("Give the size of array");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Give the elements");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] < array[i + 1])
        {
            if (array[i] % 2 != 0 && array[i + 1] % 2 != 0)
            {
                count = 1;
            }
            else
            {

                count++;
            }
        }
        else
        {
            count = 1;
        }
        if (max < count)
        {
            max = count+1;
        }
    }
    printf("max repeatation %d", max);
}