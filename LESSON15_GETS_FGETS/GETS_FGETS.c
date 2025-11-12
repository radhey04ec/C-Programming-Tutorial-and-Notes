//Why gets() function is not recommanded to store string ?
//Difference between fgets() and gets()

//Jaydeep Shah <radhey04ec@gmail.com>

/*
gets():
---------
The `gets()` function accepts a starting address from an allocated memory location, either on the Stack or the Heap. 
It takes a character pointer as its input and stores characters sequentially starting from that address.

Example:
---------
When we declare `char x[10];`, the compiler allocates 10 bytes in RAM.
Out of these, 9 bytes can be used to store actual string data, while the last byte is reserved for the null terminator `'\0'`.

?? Problem:
------------
If the user enters more than 9 characters (excluding '\0'), the `gets()` function will continue writing beyond the allocated memory limit.  
This causes **buffer overflow**, which is dangerous.

Disadvantages:
---------------
1) `gets()` may overwrite memory beyond the allocated limit, possibly corrupting other variables stored nearby.

2) The null terminator `'\0'` might be lost, which is required to mark the end of the string. Without it, string operations (like `printf`, `strlen`, etc.) can behave unpredictably.

As a result, using `gets()` can lead to undefined or unsafe behavior.

----------------------------------------------------
fgets():
---------
Syntax ? `fgets(character_pointer, size, stdin)`

Unlike `gets()`, the `fgets()` function is safer because the maximum number of characters to be read is specified by the `size` argument.
It reads at most `size - 1` characters and automatically reserves the last byte for the null terminator `'\0'`.

Hence, `fgets()` helps prevent buffer overflow and ensures string safety in C programs.
*/


#include<stdio.h>

int main()
{
	char test[10];
	
	printf("Enter string : ");
	/*
	- Only **9 characters** from user input will be stored in the array.
	- The **10th byte** is automatically used for the null terminator `'\0'`.
	- If the user enters more than 9 characters, the extra input is ignored.
	*/
	fgets(test,10,stdin);					
	
	printf("\n\nStored string is = ");
	puts(test);
	return 0;
}
