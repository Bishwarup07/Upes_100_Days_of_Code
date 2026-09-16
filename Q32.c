#include <stdio.h>
int main() {
    int n,original,rev=0,temp;
    printf("Enter a number: "); scanf("%d",&n);
    original=n; temp=n;
    if(temp<0) temp=-temp;
    while(temp){ rev=rev*10+temp%10; temp/=10; }
    if(original>=0 && original==rev) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}
