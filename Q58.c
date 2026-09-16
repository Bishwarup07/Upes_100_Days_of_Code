// Q58: Find the maximum and minimum element in an array
#include <stdio.h>
int main(){int n,a[100];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);int mx=a[0],mn=a[0];for(int i=1;i<n;i++){if(a[i]>mx)mx=a[i];if(a[i]<mn)mn=a[i];}printf("Maximum = %d\nMinimum = %d",mx,mn);return 0;}
