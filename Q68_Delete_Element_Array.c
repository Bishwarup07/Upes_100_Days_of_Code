// Q68 (Arrays 1D): Delete an element from an array.
#include <stdio.h>
int main() {
    int n, i, x, pos=-1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    for(i=0; i<n; i++) {
        if(a[i] == x) { pos=i; break; }
    }
    if(pos == -1) {
        printf("Element not found\n");
        return 0;
    }
    for(i=pos; i<n-1; i++) a[i]=a[i+1];
    for(i=0; i<n-1; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
