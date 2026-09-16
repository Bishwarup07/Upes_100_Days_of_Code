// Q65 (Arrays 1D): Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int n, i, key, low=0, high, mid, pos=-1;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    high=n-1;
    while(low <= high) {
        mid=(low+high)/2;
        if(a[mid] == key) { pos=mid; break; }
        else if(a[mid] < key) low=mid+1;
        else high=mid-1;
    }
    if(pos == -1) printf("Element not found\n");
    else printf("Element found at position %d\n", pos+1);
    return 0;
}
