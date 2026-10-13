#include <stdio.h>

int main()
{
    char str[100];
    int i, j, k;
    int length = 0;
    int first = 1;

    // Read the string
    scanf("%s", str);

    // Find length without strlen()
    while(str[length] != '\0')
    {
        length++;
    }

    // Generate all substrings
    for(i = 0; i < length; i++)
    {
        for(j = i; j < length; j++)
        {
            if(!first)
            {
                printf(",");
            }

            // Print substring from i to j
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}