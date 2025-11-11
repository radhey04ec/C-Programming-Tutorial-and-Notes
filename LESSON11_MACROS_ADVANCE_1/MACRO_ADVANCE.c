//Advance MAcro - File log
//Jaydeep Shah <radhey04ec@gmail.com>


/*
__FILE__ 	and 	__LINE__ is inbuilt MACRO for file operations
__FILE__ 	Return current Source File
__LINE__    Retrun line number of file
*/
#include<stdio.h>

//-------------------------------------------------------------------------------------------------
//MACRO - Store line number and file name if pointer is NULL
#define CHECK_NULL(pointer)		if(pointer	== 	NULL) {printf("\nPointer is NULL - File name = %s, line number = %d",__FILE__,__LINE__); return;}


int main()
{
	int 	a	=	10;
	int		*p	=   &a;
	CHECK_NULL(p);
	p			= NULL;
	CHECK_NULL(p);
	
	return 0;
}
