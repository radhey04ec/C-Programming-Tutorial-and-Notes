//Function pointer basic example
//Jaydeep Shah <radhey04ec@gmail.com>

/*
Topic: Function Pointer

A function pointer stores the address of a function, allowing you to call that function indirectly through the pointer.

Function pointers are especially useful in callback mechanisms, where one function is passed as an argument to another function.
The passed function can then be called later — for example, during an interrupt, event, or task execution in systems like RTOS or GUI frameworks.

Syntax:
return_type (*pointer_name)(parameter_types);

Example:
int (*pointer)(int, int);


Note:
The asterisk (*) must be placed inside parentheses when declaring a function pointer; otherwise, it will be interpreted as a function returning a pointer instead of a pointer to a function.
*/


#include<stdio.h>

//-------------------------------------------------------------------------------------------------
//Function - 1
void greet1()
{
	printf("\n Greet from basic function 1 !!");
}
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//Function - 2
int sum_of_two(int x,int y)
{
	return(x+y);
}
//-------------------------------------------------------------------------------------------------


int main()
{
	
//-------------------------------------------------------------------------------------------------
 //>>(1) Create varaile of function pointer - Bracket necessary around function name
 void (*ptr1)();									//Allow to point void type function
 
 //>>(2) Assignment
 ptr1	= 	greet1;									//Or we can use &greet1
 
 
 //>>(3) Calling through pointer
 (*ptr1)();											//Method-1
 ptr1();                                        	//Method-2
 
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//>>(4) Var. declaration
int (*ptr2)(int,int);                               //Function pointer var declaration

//>>(5) Assignment
ptr2	=	&sum_of_two;

//>>(6) Function calling
printf("\nSum of 5 and 10 is %d",ptr2(5,10));
printf("\nSum of 11 and 9 is %d",(*ptr2)(11,9));

//-------------------------------------------------------------------------------------------------
	
 return 0;
}
