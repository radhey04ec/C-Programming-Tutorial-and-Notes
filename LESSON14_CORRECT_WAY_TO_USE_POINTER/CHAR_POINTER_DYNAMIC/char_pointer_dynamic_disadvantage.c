//This Example demonstarte correct method to use pointer (Note : Below code may not work, it is for demo purpose only)
//Jaydeep Shah <radhey04ec@gmail.com>

/*
In the example below, I have created a character pointer intended to point-out user input data at runtime.
However, upon compiling this code, you may not encounter any errors; yet, during execution, the program may either crash or yield incorrect data. 
There are two types of memory locations: allocated (reserved by variables) and free (non-allocated). 
Accessing or utilizing a non-allocated location can lead to incorrect results, segmentation faults, or program crashes. 

1) When we declare ch_array[n], memory block corresponding to "n" is allocated in RAM, and the CPU will not permit allocation of same memory fo any other variables. 
2) The functions fgets() or gets() only utilize the starting location and will sequentially store data from that point onward. 
3) Here char *ch_pointer is initialized to point to a random location in RAM, attempting to access a non-allocated location with gets() or fgets() may result in a runtime error. 
4) Therefore, pointers should only be used when memory has already been allocated in RAM, It will allowing us to utilize that location for subsequent processing.

But when we use malloc() type function, amount of memory reserve on HEAP RAM and it's starting location will be stored in pointer, and that is safe way.
*/

#include<stdio.h>

int main()
{
	
	//-------------------------------------------------------------------------------------------------
	//Variable declarations
	char *ch_pointer;				//Pointer to point character type chunks - no memory allocated
	char ch_array[50];				//Array - 50 bytes allocated on STACK

	//1) Store data into ARRAY
	printf("\n\nEnter String (it will be stored using ARRAY) = ");
	gets(ch_array);
	
	
	//2) Wrong method !!! , don't use pointer if it has no valid location, or which is not pointing toward allocated/ reserved chunk of stack/heap
	printf("Enter String (it will be stored using pointer) = ");
	gets(ch_pointer);
	
		
	//Lets print string
	printf("\n\nString stored by pointer = ");
	puts(ch_pointer);
	printf("\n\nString stored by ARRAY = =");
	puts(ch_array);
	return 0;
}
