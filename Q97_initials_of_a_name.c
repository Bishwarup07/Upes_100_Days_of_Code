#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;

    // Read the complete name
    fgets(name, sizeof(name), stdin);

    // Print first initial
    if(name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }

    // Find initials after spaces
    while(name[i] != '\0' && name[i] != '\n')
    {
        if(name[i] == ' ' &&
           name[i + 1] != ' ' &&
           name[i + 1] != '\0' &&
           name[i + 1] != '\n')
        {
            printf("%c.", name[i + 1]);
        }

        i++;
    }

    return 0;
}