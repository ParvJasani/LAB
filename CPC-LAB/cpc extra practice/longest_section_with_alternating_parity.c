// Longest section with alternating parity
// Given an integer array, find the length of the longest contiguous section in which every pair of adjacent elements has different parity — one is even and the other is odd.
// -------------------------------------------------------
// 1 2 4 7 8 3 5
// Expected answer : 4
// One longest section is[7, 8, 3, 5].
// --------------------------------------------------------
// 2 4 6 8

// Expected answer : 1
// All elements are even,
// so no adjacent pair has different parity.
// -------------------------------------------------------

#include <stdio.h>

int main()
{
    int m, i = 0, count = 1, max = 1;

    printf("Tell the size of array: ");
    scanf("%d", &m);

    if (m <= 0)
        return 0;

    int arr[m];

    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = 0;

    while (i < m - 1)
    {
        if ((arr[i] % 2 == 0 && arr[i + 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i + 1] % 2 == 0))
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (max < count)
        {
            max = count;
        }

        i++;
    }

    printf("%d", max);

    return 0;
}
