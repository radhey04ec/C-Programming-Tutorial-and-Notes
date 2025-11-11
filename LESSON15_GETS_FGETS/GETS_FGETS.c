//Why gets() function is not recommanded to store string ?
//Difference between fgets() and gets()

//Jaydeep Shah <radhey04ec@gmail.com>

/*
gets(): This function accepts a starting point from an allocated location in either the Stack or Heap, essentially taking a character pointer as its input. 
        From this starting point, it sequentially stores characters one by one.

Consider the declaration of char x[10] in the code, which allocates 10 bytes in RAM. 
Out of these, 9 bytes can be utilized for storing string data, with the remaining byte reserved for the null terminator '\0'.
However, if a user inputs more than 10 characters, the gets() function will continue to write beyond the allocated 10 bytes, which poses a significant risk. 

There are two primary disadvantages to this method:
1) The gets() function may overwrite memory values beyond the 10-byte limit, potentially affecting other variables that are allocated in that memory space.
2) The null terminator '\0' may be lost, which is crucial for indicating the end of the string.

As a result, this can lead to unpredictable behavior.

fgets(): Syntax --> fgets(character pointer, size, stdin) 
In this case, the size is specified as an argument to the function, making it a safer option to use.
It only store size-1 characters, last byte reserve for NULL Termination
*/


#include<stdio.h>

int main()
{
	char test[10];
	
	printf("Enter string : ");
	fgets(test,10,stdin);
	
	printf("\n\nStored string is = ");
	puts(test);
	return 0;
}
