// Q43: Check if a number is a strong number
#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}
int main(){
    int n,t,s=0;
    scanf("%d",&n);
    t=n;
    while(t){
        s+=fact(t%10);
        t/=10;
    }
    printf(s==n?"Strong Number":"Not a Strong Number");
    return 0;
}
