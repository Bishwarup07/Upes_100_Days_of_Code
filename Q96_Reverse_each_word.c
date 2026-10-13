#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, start, end, j;

    // Read complete sentence
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n')
    {
        // Skip spaces
        if(str[i] == ' ')
        {
            printf(" ");
            i++;
            continue;
        }

        // Find start of word
        start = i;

        // Find end of word
        while(str[i] != ' ' &&
              str[i] != '\0' &&
              str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        // Print word in reverse
        for(j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }
    }

    return 0;
}