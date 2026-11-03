#include <stdio.h>
#include <math.h>
// Function to calculate Simple Interest
float simpleInterest(float p, float r, float t) {
    return (p * r * t) / 100.0;
}

// Function to calculate Compound Interest
float compoundInterest(float p, float r, float t) {
    float amount = p * pow((1.0 + (r / 100.0)), t);
    return amount - p;
}

int main() {
    float principal, rate, time;

    
    printf("Enter principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter rate of interest (R): ");
    scanf("%f", &rate);

    printf("Enter time in years (T): ");
    scanf("%f", &time);

    // Call functions
    float si = simpleInterest(principal, rate, time);
    float ci = compoundInterest(principal, rate, time);

    
    printf("\nSimple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}

