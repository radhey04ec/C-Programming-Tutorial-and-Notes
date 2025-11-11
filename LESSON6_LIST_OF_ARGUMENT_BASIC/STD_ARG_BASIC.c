//Example of function to handle varaible arguments
//Jaydeep Shah <radhey04ec@gmail.com>

/*
Topic: Handling Variable Number of Arguments in C (<stdarg.h>)

The <stdarg.h> library is required to handle functions with a variable number of arguments in C.
The ... (called ellipsis) in the function parameter list indicates that the function can accept a variable number of arguments.

va_list Macros:
There are four important steps to handle variable argument functions:

1) va_list : Declares a variable that will store the information needed to retrieve the additional arguments.
2) va_start : Initializes the argument list; sets the starting point for accessing the variable arguments.
3) va_arg : Retrieves each argument in sequence. After each retrieval, the internal pointer automatically moves to the next argument.
4) va_end : Cleans up the memory used by the argument list; should always be called before the function returns.

Working Mechanism:
When a function is called, its arguments, return address, and local variables are pushed onto the stack.
The macros provided in <stdarg.h> access this stack frame to retrieve the variable arguments one by one and perform the required operations.
*/


#include<stdio.h>
#include<stdarg.h>


//-------------------------------------------------------------------------------------------------
//Function declaration - function will accept different number of arguments
//User will have to pass how many arguments are there
int maximum(int no_of_args,...);
//-------------------------------------------------------------------------------------------------



int main()
{
	//Function call 
	int answer = maximum(6,7,4,11,89,22,54);
	printf("Maximum number is %d",answer);
	return 0;

}




//-------------------------------------------------------------------------------------------------
//Function body
//User will have to pass how many arguments are there
int maximum(int no_of_args,...)
{
	//>>STEP1
	va_list			list_of_args;			//Variable to store all args in function
	
	
	//>>STEP2
	va_start(list_of_args,no_of_args);		//Starting point, last fixed argument name must be pass
	
	int counter = 0;
	int max     = 0;
	for(counter=0;counter<no_of_args;counter++)
	{
		//Extract one by one argument, which have type 'int'
		//>>STEP 3
		int x = va_arg(list_of_args, int);
		
		if(x > max) max = x;
		
	}
	
	
	//>>STEP 4
	//Clear memory - Memory Free
	va_end(list_of_args);
	
	//return
	return(max);
}
//-------------------------------------------------------------------------------------------------
