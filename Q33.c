#include <stdio.h>
int main() {
    int n,original,temp,digits=0,digit,i; long long sum=0,power;
    printf("Enter a non-negative integer: "); scanf("%d",&n);
    if(n<0){ printf("Please enter a non-negative integer\n"); return 0; }
    original=n; temp=n;
    if(temp==0) digits=1;
    while(temp){ digits++; temp/=10; }
    temp=n;
    while(temp){
        digit=temp%10; power=1;
        for(i=0;i<digits;i++) power*=digit;
        sum+=power; temp/=10;
    }
    if(sum==original) printf("Armstrong number\n");
    else printf("Not an Armstrong number\n");
    return 0;
}
