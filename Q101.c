#include <stdio.h>

int main()
{
    int nums[100];
    int n, target;
    int i;
    int first = -1, last = -1;

    // Input number of elements
    scanf("%d", &n);

    // Input sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Input target
    scanf("%d", &target);

    // Find first and last occurrence
    for(i = 0; i < n; i++)
    {
        if(nums[i] == target)
        {
            // Store first occurrence only once
            if(first == -1)
            {
                first = i;
            }

            // Update last occurrence
            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}