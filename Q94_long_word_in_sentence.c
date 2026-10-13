#include <stdio.h>

int main()
{
    char str[200], longest[100];
    int i = 0, j;
    int start = 0, length = 0;
    int maxLength = 0, maxStart = 0;

    // Read the complete sentence
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        // End of a word
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if(length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            start = i + 1;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    // Copy longest word
    for(j = 0; j < maxLength; j++)
    {
        longest[j] = str[maxStart + j];
    }

    longest[j] = '\0';

    // Print longest word
    printf("%s", longest);

    return 0;
}