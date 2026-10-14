#include <stdio.h>

int main()
{
    int nums[100], answer[100];
    int n, i, j;
    int product;

    // Input size of array
    scanf("%d", &n);

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Calculate product except self
    for(i = 0; i < n; i++)
    {
        product = 1;

        for(j = 0; j < n; j++)
        {
            if(i != j)
            {
                product = product * nums[j];
            }
        }

        answer[i] = product;
    }

    // Print answer array
    printf("[");

    for(i = 0; i < n; i++)
    {
        printf("%d", answer[i]);

        if(i < n - 1)
        {
            printf(",");
        }
    }

    printf("]");

    return 0;
}