//Function Pointer Advance
//Jaydeep Shah <radhey04ec@gmail.com>


/*
Use of Function Pointers:

>> They make it possible to call different functions at runtime using a single function pointer.

>> Function pointers allow us to write generic and flexible code that can work with different functions, improving code reusability.

>> They make it possible to pass a function as an argument to another function — this is one of the most important uses of function pointers (for example, in callback mechanisms).

*/

#include<stdio.h>

//-------------------------------------------------------------------------------------------------
//Function -1 For ADD two number
void add(int x,int y)
{
	printf("\n ADD %d and %d is %d",x,y,x+y);
}
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//Function-2 For ultiplication
void mul(int x,int y)
{
	printf("\n MULTIPLICATION of %d and %d is %d",x,y,x*y);
}
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//Function -3 accept function as argument
void execute_operation(void (*fun)(int,int),int x,int y)
{
	//Fun var did not aware about which operation need to do, it depends on what user pass during execute_operation function call
	fun(x,y);
}
//-------------------------------------------------------------------------------------------------

int main()
{
	execute_operation(add,10,20);
	execute_operation(mul,10,20);

	return 0;
}
