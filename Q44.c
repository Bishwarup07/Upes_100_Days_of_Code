// Q44: Find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms
#include <stdio.h>
int main(){
    int n;
    double s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s+=(double)(2*i-1)/(2*i);
    printf("%.2f",s);
    return 0;
}
