#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    if (ch >= 'A' && ch <= 'Z') ch += 'a' - 'A';
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') printf("Vowel\n");
    else if (ch >= 'a' && ch <= 'z') printf("Consonant\n");
    else printf("Not an alphabet\n");
    return 0;
}
