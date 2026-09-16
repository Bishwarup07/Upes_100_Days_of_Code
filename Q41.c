// Q41: Swap the first and last digit of a number
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n,last=n%10,p=1;
    while(t>=10){
        t/=10;
        p*=10;
    }
    int first=t;
    int middle=(n%p)/10;
    printf("%d",last*p+middle*10+first);
    return 0;
}
