// Q63 (Arrays 1D): Merge two arrays.
#include <stdio.h>
int main() {
    int n, m, i;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &m);
    int b[m], c[n+m];
    for(i=0; i<m; i++) scanf("%d", &b[i]);
    for(i=0; i<n; i++) c[i]=a[i];
    for(i=0; i<m; i++) c[n+i]=b[i];
    for(i=0; i<n+m; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
