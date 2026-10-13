#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0, count = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Read the character
    scanf("%c", &ch);

    // Count frequency
    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    // Display result
    printf("%d", count);

    return 0;
}