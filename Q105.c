#include <stdio.h>

int main()
{
    int nums[100];
    int n, i, j;
    int count;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Check frequency of each element
    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }

        // Check majority condition
        if(count > n / 2)
        {
            printf("%d", nums[i]);
            return 0;
        }
    }

    // No majority element
    printf("-1");

    return 0;
}