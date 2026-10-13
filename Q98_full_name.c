#include <stdio.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    // Read complete name
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for(i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if(name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    // Print first initial
    printf("%c.", name[0]);

    // Print initials except surname
    for(i = 0; i < lastSpace; i++)
    {
        if(name[i] == ' ' && i + 1 < lastSpace)
        {
            printf("%c.", name[i + 1]);
        }
    }

    // Print space before surname
    printf(" ");

    // Print surname in full
    for(i = lastSpace + 1;
        name[i] != '\0' && name[i] != '\n';
        i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}