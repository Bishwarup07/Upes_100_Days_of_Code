#include <stdio.h>
int main() {
    unsigned int n, mask=1; int started=0;
    printf("Enter a non-negative integer: "); scanf("%u",&n);
    if(n==0){ printf("Binary = 0\n"); return 0; }
    while(mask <= n/2) mask*=2;
    printf("Binary = ");
    while(mask){ printf("%u",(n/mask)%2); mask/=2; }
    printf("\n");
    return 0;
}
