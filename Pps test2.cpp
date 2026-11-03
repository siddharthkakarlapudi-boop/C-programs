#include<stdio.h>

int main() {
	int num,remainder, sum = 0; // Local declarations
	
	printf("Enter an Integer: "); // User Input
	scanf("%d", &num);// Read Input
	
	while(num != 0) { // Using For Loop function
		remainder = num % 10;
		sum += remainder; //+= sum= sum+remainder
		num /= 10;// num = num/10
	}
	printf("Sum of digits = %d\n", sum);
	
	return 0;
}

