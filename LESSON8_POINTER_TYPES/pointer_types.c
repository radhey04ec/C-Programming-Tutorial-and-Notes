//Tpes of pointers in C
//Jaydeep Shah <radhey04ec@gmail.com>

#include<stdio.h>
#include<stdlib.h>			//For malloc and FREE

int main()
{
	//---------------------------------------------------------------------------------------------
	//1) Void pointer - Genric pointer - it stores address variable of any type
	//Must be typecast correctly before dereferencing
	void 		*ptr_void;
	
	int 		x	= 10;
	float		y 	= 3.14;
	char		z 	= 'J';
	
	
	ptr_void		= 	&x;
	printf("\n>>Extract value of integer using void pointer = %d",*((int *)ptr_void));   //(int *) indicate void pointer type-casting from void to int*
		
	ptr_void		= 	&y;
	printf("\n>>Extract value of float using void pointer = %f",*((float *)ptr_void));   //(float *) indicate void pointer type-casting from void to float*
		
	ptr_void		= 	&z;
	printf("\n>>Extract value of character using void pointer = %c",*((char *)ptr_void));   //(char *) indicate void pointer type-casting from void to char*

	//---------------------------------------------------------------------------------------------	
	
	
	
	//---------------------------------------------------------------------------------------------
	//Null Pointer - point to nothing, 0 Meory ADD / base ADD
	//Useful to handle pointer, which point out to Memory location which already free, de-allocated
	int 	*ptr_NULL		= (int *)malloc(sizeof(int));			//Allocate memory space to store integer on HEAP
	*ptr_NULL				= 320;
	printf("\n>>Value store on HEAP is %d",*ptr_NULL);
	
	//Now after use lets free it
	free(ptr_NULL);                                                //Memory FREE,but point to invalid location
	
	//Note: Now ptr_NULL is dangling pointer
	//Lets convert into NULL Pointer
	ptr_NULL				= NULL;
	
	if(ptr_NULL == NULL)
	{
		printf("\n>>dangling pointer now NULL pointer !!!");
	}
	//---------------------------------------------------------------------------------------------
	return 0;
}
