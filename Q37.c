#include <stdio.h>
int main() {
    int a,b,x,y,temp,gcd; long long lcm;
    printf("Enter two numbers: "); scanf("%d %d",&a,&b);
    if(a==0 || b==0){ printf("LCM = 0\n"); return 0; }
    x=a<0?-a:a; y=b<0?-b:b;
    while(y){ temp=y; y=x%y; x=temp; }
    gcd=x; lcm=((long long)a/gcd)*b;
    if(lcm<0) lcm=-lcm;
    printf("LCM = %lld\n",lcm);
    return 0;
}
