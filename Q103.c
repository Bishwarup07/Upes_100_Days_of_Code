#include <stdio.h>

int main()
{
    int nums[100];
    int n, i;
    int totalSum = 0;
    int leftSum = 0;
    int rightSum;

    // Input number of elements
    scanf("%d", &n);

    // Input array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    // Find pivot index
    for(i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            printf("%d", i);
            return 0;
        }

        leftSum += nums[i];
    }

    // No pivot index found
    printf("-1");

    return 0;
}