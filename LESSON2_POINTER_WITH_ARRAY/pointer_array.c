//Array and Pointer
//Jaydeep Shah <radhey04ec@gmail.com>

/*
Code : How to use pointer with Array 
*/

#include<stdio.h>

int main()
{
	
	//---------------------------------------------------------------------------------------------
	//>>(1) Create individual var. and Array
	int 		a 	= 100;
	int 		b 	= 200;
	int 		c 	= 300;
	int 		d[3]= {111,222,333};
	
	
	//>>(2) Create pointer var
	int         *p_array[3];                             //Array of Pointer, hold 3 address (point toward 3 different integer var.)
	int         (*p)[3];								 //Pointer of Array, it point toward Array which contains 3 integer var
	
	
	//>>(3) ADD assignment to pointer
	p_array[0]		= &a; 
	p_array[1]		= &b;
	p_array[2]		= &c;
	printf("\nPrint a,b,c with help of pointer array = %d,%d,%d",*p_array[0],*p_array[1],*p_array[2]);
	
	
	//>>(4) ADD assignment of Array to pointer
	p				= d;
	printf("\nPrint Array with help of pointer %d,%d,%d",(*p)[0],(*p)[1],(*p)[2]);
	
	
	
	
	//---------------------------------------------------------------------------------------------
	
	return 0;
}
