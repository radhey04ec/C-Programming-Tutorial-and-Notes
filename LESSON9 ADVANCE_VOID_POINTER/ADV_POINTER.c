//Advance void pointer example
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>

print_my_array(void *arg,int elements,int size_individual,char request)
{
	int counter 	=	0;
	for(counter = 0; counter < elements; counter++)
	{
		if(request == 'I') printf("\nLocation [%d] - ML = %p - Value = %d",counter,arg,*((int*)arg));
		if(request == 'F') printf("\nLocation [%d] - ML = %p - Value = %f",counter,arg,*((float*)arg));
		arg = arg +  size_individual;
	}
}


int main()
{
	int 	array_integer[5] 	= {1,2,3,4,5};
	float	array_flt[5]		= {1.1,2.2,3.3,4.4,5.5};
	
	
	//Find size
	int size_of_array			= sizeof(array_integer);
	int number_of_element	    = sizeof(array_integer) / sizeof(array_integer[0]);
	int size_of_single_elem 	= sizeof(int);
	
	
	//Call Function
	//Integer Printing
	print_my_array(array_integer,number_of_element,size_of_single_elem,'I');
	printf("\n\n");
	
	
	size_of_array				= sizeof(array_flt);
	number_of_element	   	    = sizeof(array_flt) / sizeof(array_flt[0]);
	size_of_single_elem 		= sizeof(float);
	print_my_array(array_flt,number_of_element,size_of_single_elem,'F');
	
	return 0;
}
