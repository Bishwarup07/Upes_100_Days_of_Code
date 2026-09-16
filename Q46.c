// Q46: Print a 5 x 5 pattern of asterisks
#include <stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
