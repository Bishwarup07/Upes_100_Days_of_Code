// Q52: Print the shown vertical/diagonal asterisk pattern
#include <stdio.h>
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<i;j++)
            printf(" ");
        printf("*\n");
    }
    return 0;
}
