#include<stdio.h>

int main(){

	// Declaring the variable 
	int v = 12;

	// Declaring the pointer 
	int* p;

	// Assiging the pointer to the address of var 
	
	p = &v;

	// printing the variable value
	printf("Value of the variable %d\n" , v);
	
	// print the pointer 
	printf("Address of variable %p\n" , &v);

	// Address of the output is kept in pointer 
	printf("Value of the pointer %p\n" , p);

	//The value of the output at the memory address kept in pointer p  
	printf("Value pointed to by pointer %d\n" , *p);

	return 0;
	

}
