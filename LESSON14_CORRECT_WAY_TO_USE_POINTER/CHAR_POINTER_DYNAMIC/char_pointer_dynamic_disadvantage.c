// This example demonstrates the correct method to use pointers.
//Note: The code below is for explanation only and may not run as-is.
//Author: Jaydeep Shah <radhey04ec@gmail.com>

/*
In the example below, a character pointer is used to handle user input data at runtime.
The code might compile without errors, but during execution, it could crash or produce unexpected results. This happens because of how memory is managed in C.

In C, memory is divided into two types:
1) Allocated memory — reserved by variables or functions.
2) Free memory — unallocated space that should not be accessed directly.

Accessing or using non-allocated memory can cause incorrect results, segmentation faults, or program crashes.

Key Points:
1) When we declare an array like `char ch_array[n];`, memory for 'n' bytes is properly allocated in RAM. 
The CPU ensures that the same memory block is not reused by another variable.

2) Functions like `fgets()` or `gets()` take the *starting address* of the memory block and then store input data sequentially from that point.

3) If we declare a pointer like `char *ch_pointer;` without assigning it a valid memory address, it points to a random location in RAM.
   Using such an uninitialized pointer with `gets()` or `fgets()` may cause a runtime error or crash.

4) Therefore, pointers should only be used with valid, allocated memory. 
   This ensures the pointer safely accesses a known location in RAM.

To safely allocate memory at runtime, functions like `malloc()` (or `calloc()`) can be used. 
They reserve space on the HEAP, and the function returns the starting address of that memory block, which can be safely stored in a pointer.
*/


#include<stdio.h>
#include<string.h>
int main()
{
	
	//-------------------------------------------------------------------------------------------------
	//Variable declarations
	char *ch_pointer;				//Pointer to point character type chunks - no memory allocation for storing data
	char ch_array[50];				//Array - 50 bytes allocated on STACK

	//1) Store data into ARRAY
	printf("\n\nEnter String (it will be stored using ARRAY) = ");
	gets(ch_array);
	
	
	//2) Wrong method !!! , don't use pointer if it has no valid location, or which is not pointing toward allocated/ reserved chunk of stack/heap
	printf("Enter String (it will be stored using pointer) = ");
	gets(ch_pointer);                                                //Crash point of code....
	
		
	//Lets print string
	printf("\n\nString stored by ARRAY = =");
	puts(ch_array);
	printf("\n\nString stored by pointer = ");
	puts(ch_pointer);
	return 0;
}
