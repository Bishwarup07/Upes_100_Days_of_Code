#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float SI, CI;

    // Input
    scanf("%f %f %f", &principal, &rate, &time);

    // Simple Interest
    SI = (principal * rate * time) / 100;

    // Compound Interest
    CI = principal * pow((1 + rate / 100), time) - principal;

    // Output
    printf("Simple Interest=%.0f, Compound Interest=%.2f", SI, CI);

    return 0;
}