#include <stdio.h>
int main() {
    long long n,rev=0,sign=1;
    printf("Enter a number: "); scanf("%lld",&n);
    if(n<0){ sign=-1; n=-n; }
    while(n){ rev=rev*10+n%10; n/=10; }
    printf("Reversed number = %lld\n",rev*sign);
    return 0;
}
