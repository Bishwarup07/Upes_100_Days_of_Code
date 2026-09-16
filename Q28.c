#include <stdio.h>
int main() {
    int n,i,found=0; unsigned long long product=1;
    printf("Enter n: "); scanf("%d",&n);
    for(i=2;i<=n;i+=2){ product*=i; found=1; }
    if(found) printf("Product = %llu\n",product);
    else printf("No positive even numbers in range\n");
    return 0;
}
