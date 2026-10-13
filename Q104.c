#include <stdio.h>

int main()
{
    int n, x, i;
    int leftSum, rightSum;

    // Input n
    scanf("%d", &n);

    // Check every possible pivot
    for(x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        // Sum from 1 to x
        for(i = 1; i <= x; i++)
        {
            leftSum += i;
        }

        // Sum from x to n
        for(i = x; i <= n; i++)
        {
            rightSum += i;
        }

        // Check pivot
        if(leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    // No pivot found
    printf("-1");

    return 0;
}