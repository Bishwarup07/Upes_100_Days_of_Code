#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int sum, maxSum;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input k
    scanf("%d", &k);

    // Check valid k
    if(k <= 0 || k > n)
    {
        printf("-1");
        return 0;
    }

    // Find sum of first subarray
    maxSum = 0;

    for(i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    // Check remaining subarrays
    for(i = 1; i <= n - k; i++)
    {
        sum = 0;

        for(j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if(sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}