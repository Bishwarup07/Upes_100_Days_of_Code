#include <stdio.h>

int main()
{
    int arr[100];
    int n, k;
    int i, j;
    int firstNegative;

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

    // Check each subarray of size k
    for(i = 0; i <= n - k; i++)
    {
        firstNegative = 0;

        // Find first negative number
        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                firstNegative = arr[j];
                break;
            }
        }

        printf("%d", firstNegative);

        if(i < n - k)
        {
            printf(" ");
        }
    }

    return 0;
}