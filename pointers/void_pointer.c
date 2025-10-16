#include <stdio.h>

int main() {
	int a = 2;
	float b = 3.02;

	void *ptr = NULL;
	ptr = &a;
	
	// printing the value after typecasting and dereferencing
	
	printf("The value of integer: %d\n" , *(int*) ptr);

	ptr = &b;
	printf("The value of float: %f\n" , *(float*) ptr);

	return 0;

}
