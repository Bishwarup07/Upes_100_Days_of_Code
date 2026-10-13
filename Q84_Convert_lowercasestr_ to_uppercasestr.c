#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Convert lowercase letters to uppercase
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }

    // Print uppercase string
    printf("%s", str);

    return 0;
}