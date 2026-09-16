// Q61 (Arrays 1D): Search for an element in an array using linear search.
#include <stdio.h>
int main() {
    int n, i, key, pos=-1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for(i=0; i<n; i++) {
        if(a[i] == key) { pos=i; break; }
    }
    if(pos == -1) printf("Element not found\n");
    else printf("Element found at position %d\n", pos+1);
    return 0;
}
