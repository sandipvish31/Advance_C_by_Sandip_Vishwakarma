#include <stdio.h>

// Macro to calculate Simple Interest
#define SI(p, r, t) ((p) * (r) * (t) / 100)

int main()
{
    float principal, rate, time, si;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    si = SI(principal, rate, time);

    printf("Simple Interest = %.2f\n", si);

    return 0;
}