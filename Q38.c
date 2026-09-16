#include <stdio.h>
int main() {
    long long n; int sum=0;
    printf("Enter a number: "); scanf("%lld",&n);
    if(n<0) n=-n;
    while(n){ sum+=n%10; n/=10; }
    printf("Sum of digits = %d\n",sum);
    return 0;
}
