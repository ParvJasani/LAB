// Longest valid contiguous section
// You are given an array of integers. Find the length of the longest contiguous section in which no two adjacent elements are equal.
// ---------------------------------------------------
// 1, 2, 2, 3, 4, 4, 5
// Expected answer : 3
// One longest valid section is[2, 3, 4]
// ---------------------------------------------------
// 4, 1, 2, 3, 0, 5
// Expected answer : 6
// Every adjacent pair is different.5 5 1 2 3 3 4 5
// ------------------------------------------------------

#include <stdio.h>

int main()
{
    int n, count = 1, max = 1;

    printf("Give the size of array: ");
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("Give the elements: ");
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] == array[i + 1])
        {
            count = 1;

            for (int j = i + 1; j < n - 1; j++)
            {
                if (array[j] == array[j + 1])
                {
                    break;
                }
                else
                {
                    count++;
                }

                if (count > max)
                {
                    max = count;
                }
            }
        }
    }

    if (max == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", max);
    }

    return 0;
}
