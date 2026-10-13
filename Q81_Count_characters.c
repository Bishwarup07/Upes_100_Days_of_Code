#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    // Read the complete string including spaces
    fgets(str, sizeof(str), stdin);

    // Count characters
    while(str[count] != '\0' && str[count] != '\n')
    {
        count++;
    }

    // Display result
    printf("%d", count);

    return 0;
}