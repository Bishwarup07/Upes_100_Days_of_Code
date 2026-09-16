// Q55: Print all prime numbers from 1 to n
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int x=2;x<=n;x++){
        int prime=1;
        for(int i=2;i*i<=x;i++)
        if(x%i==0){
            prime=0;
            break;}
            if(prime)
            printf("%d ",x);
        }
        return 0;
 }

