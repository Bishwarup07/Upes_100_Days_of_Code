// Q67 (Arrays 1D): Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int n, i, x, pos;
    scanf("%d", &n);
    int a[n+1];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d%d", &x, &pos);
    if(pos < 1 || pos > n+1) {
        printf("Invalid position\n");
        return 0;
    }
    for(i=n; i>=pos; i--) a[i]=a[i-1];
    a[pos-1]=x;
    for(i=0; i<=n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
