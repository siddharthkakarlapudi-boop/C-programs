#include<stdio.h> 

int main() {
    int N, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Direct formula O(1)
    int n = N / 2; // count of even numbers up to N
    int formula_sum = n * (n + 1);

    printf("Sum of even numbers up to %d (using formula) = %d\n", N, formula_sum);

    return 0;
}
