int main(void)
{
	int a[] = {10, 25, 30, 45, 60};
	int key = 45;
	int result;
	
	result = linearSearch(a, 5, key);
	
	if (result != -1){
	printf("Found at index %d", result);
}
	else{
		printf("Not found");
	}
}
