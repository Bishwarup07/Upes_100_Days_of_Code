#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int previousGreater;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find previous greater element
    for(i = 0; i < n; i++)
    {
        previousGreater = -1;

        // Search from nearest left element
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                previousGreater = arr[j];
                break;
            }
        }

        // Print comma-separated output
        printf("%d", previousGreater);

        if(i < n - 1)
        {
            printf(", ");
        }
    }

    return 0;
}