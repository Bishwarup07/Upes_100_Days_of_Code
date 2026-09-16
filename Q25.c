#include <stdio.h>
int main() {
    int a,b; char op;
    printf("Enter expression (example: 10 + 5): ");
    scanf("%d %c %d",&a,&op,&b);
    switch(op) {
        case '+': printf("Result = %d\n",a+b); break;
        case '-': printf("Result = %d\n",a-b); break;
        case '*': printf("Result = %d\n",a*b); break;
        case '/': if(b) printf("Result = %.2f\n",(float)a/b); else printf("Division by zero not possible\n"); break;
        case '%': if(b) printf("Result = %d\n",a%b); else printf("Modulo by zero not possible\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
