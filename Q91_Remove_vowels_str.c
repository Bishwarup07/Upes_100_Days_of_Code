#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Remove vowels
    while(str[i] != '\0')
    {
        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    // Add null character at the end
    str[j] = '\0';

    // Print result
    printf("%s", str);

    return 0;
}