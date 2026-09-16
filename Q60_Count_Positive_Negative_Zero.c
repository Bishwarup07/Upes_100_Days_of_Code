// Q60 (Arrays 1D): Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, i, positive=0, negative=0, zero=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0) positive++;
        else if(a[i] < 0) negative++;
        else zero++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d\n", positive, negative, zero);
    return 0;
}
