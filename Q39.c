// Q39: Product of odd digits of a number
#include <stdio.h>
int main(){
    int n,p=1,f=0;
    scanf("%d",&n);
    while(n){
        int d=n%10;
        if(d%2){
            p*=d;
            f=1;
        }
        n/=10;
    }
    printf("%d",f?p:0);
    return 0;
}
