#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i, palindrome = 1;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Find length of string
    while(str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    // Display result
    if(palindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}