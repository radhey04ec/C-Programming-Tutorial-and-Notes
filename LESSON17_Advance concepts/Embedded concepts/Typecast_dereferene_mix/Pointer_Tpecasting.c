/*
Many times we have to typecast pointer and this is where confusion often arise.

Note/Example:
VALUE = * (type *)ADDRESS;
Part inside parantheses, here it is (type *)ADDRESS. It is typecasting.
It converts Address to pointer of specific type

The Outer "*" sign is dereference.
It access the value at ADDRESS after tpecasting.

Date: 18 MAY 2025
Author: Jaydeep Shah
*/

#include <stdio.h>
#include <stdint.h>


//Rename data types
typedef uint32_t 			GPIO_32BIT_REG_t;
typedef uint8_t             GPIO_8BIT_REG_t;

//Create Global variables
GPIO_32BIT_REG_t			GPIO_32BIT_REG;
GPIO_8BIT_REG_t				GPIO_8BIT_REG;

//Create void pointer to pointout anytype of variable
void						*ptr;


int main()
{
	//Assign some values into variables
	GPIO_32BIT_REG			= 0x64;			//Decimal value = 100
	GPIO_8BIT_REG			= 0x32;			//Decimal value = 50
	
	//Lets use void pointer with 32BIT 
	ptr 					= &GPIO_32BIT_REG; 
	
	/*	
	VALUE = * (type *)ADDRESS;
	Part inside parantheses, here it is (type *)ADDRESS. It is typecasting.
	It converts Address to pointer of specific type
	
	The Outer "*" sign is dereference.
	It access the value at ADDRESS after tpecasting.
	*/

	printf("Value of 32 bit REG = %d",*(GPIO_32BIT_REG_t *)ptr);
	
	//Now lets use with 8BIT
	ptr 					= NULL;
	ptr						= &GPIO_8BIT_REG;
		printf("\nValue of 8 bit REG = %d",*(GPIO_8BIT_REG_t *)ptr);
	
	return 0;
}
