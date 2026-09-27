// Q50: Print a decreasing triangle star pattern
// C89-compatible version: declare i and j at the top
#include <stdio.h>

int main(void)
{
    int i, j;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
