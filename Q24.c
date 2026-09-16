#include <stdio.h>
int main() {
    double u,bill;
    printf("Enter units consumed: ");
    scanf("%lf",&u);
    if(u<0){ printf("Invalid units\n"); return 0; }
    if(u<=100) bill=u*5;
    else if(u<=200) bill=500+(u-100)*7;
    else if(u<=300) bill=500+700+(u-200)*10;
    else bill=500+700+1000+(u-300)*12;
    printf("Electricity Bill = Rs. %.2lf\n",bill);
    return 0;
}
