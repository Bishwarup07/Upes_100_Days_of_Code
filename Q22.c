#include <stdio.h>
int main() {
    double cp,sp,p;
    printf("Enter cost price and selling price: ");
    scanf("%lf %lf",&cp,&sp);
    if(cp<=0){ printf("Invalid cost price\n"); return 0; }
    if(sp>cp){ p=(sp-cp)*100/cp; printf("Profit = %.2lf%%\n",p); }
    else if(sp<cp){ p=(cp-sp)*100/cp; printf("Loss = %.2lf%%\n",p); }
    else printf("No profit, no loss\n");
    return 0;
}
