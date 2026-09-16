// Q69 (Arrays 1D): Find the second largest element in an array.
#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, largest=INT_MIN, second=INT_MIN;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > largest) {
            second=largest;
            largest=a[i];
        } else if(a[i] > second && a[i] != largest) {
            second=a[i];
        }
    }
    if(second == INT_MIN) printf("No second largest element\n");
    else printf("%d\n", second);
    return 0;
}
