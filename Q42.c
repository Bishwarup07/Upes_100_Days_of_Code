// Q42: Check if a number is a perfect number
#include <stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        if(n%i==0)
            s+=i;
    printf(s==n?"Perfect Number":"Not a Perfect Number");
    return 0;
}
