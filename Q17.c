#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c,d;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){ printf("Not a quadratic equation.\n"); return 0; }
    d=b*b-4*a*c;
    if(d>0) {
        printf("Real and distinct roots: %.2lf, %.2lf\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    } else if(d==0) {
        printf("Real and equal roots: %.2lf\n",-b/(2*a));
    } else {
        printf("Complex roots: %.2lf + %.2lfi, %.2lf - %.2lfi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    }
    return 0;
}
