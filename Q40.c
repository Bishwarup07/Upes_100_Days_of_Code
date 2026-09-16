// Q40: Find the 1's complement of a binary number and print it
#include <stdio.h>
int main(){
    long long n;
    scanf("%lld",&n);
    long long r=0,p=1;
    while(n){
        int d=n%10;
        r+=(1-d)*p;
        p*=10;
        n/=10;
    }
    printf("%lld",r);
    return 0;
}
