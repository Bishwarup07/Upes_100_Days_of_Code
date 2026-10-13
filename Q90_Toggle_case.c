#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Toggle case
    while(str[i] != '\0' && str[i] != '\n')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            // Lowercase to uppercase
            str[i] = str[i] - 'a' + 'A';
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            // Uppercase to lowercase
            str[i] = str[i] - 'A' + 'a';
        }

        i++;
    }

    // Print result
    printf("%s", str);

    return 0;
}