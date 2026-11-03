//Sum if array elements function
#include<stdio.h>

//function prototype/declaration
int sum_array(int array[10]);

int main()
{
	int result,i;
	int my_array[10];
	for(i=0;i<10;i++)
	{
		scanf("%d", &my_array[i]);	
	}
	//function calling
	result = sum_array(my_array);
	printf("Sum of array elements = %d", result);
	return 0;
}

