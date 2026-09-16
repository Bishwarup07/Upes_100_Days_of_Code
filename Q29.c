#include <stdio.h>
int main() {
    int n,i; unsigned long long f=1;
    printf("Enter a non-negative integer: "); scanf("%d",&n);
    if(n<0){ printf("Factorial not defined for negative numbers\n"); return 0; }
    for(i=1;i<=n;i++) f*=i;
    printf("%d! = %llu\n",n,f);
    return 0;
}
