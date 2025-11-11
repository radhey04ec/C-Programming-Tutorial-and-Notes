//Code : Use of passing 2D ARRAY as a argument inside Function
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>


//-------------------------------------------------------------------------------------------------
#define COL_WIDTH 					2					//Define Column Width


//-------------------------------------------------------------------------------------------------
//Pointer - point toward Array (We have seen same thing in our previous example)
void print_my_2D_array_method_2(int (*arg)[COL_WIDTH],int R,int C)
{

int j=0,k=0;

printf("\nPRINT 2D ARRAY - From Function method-2\n");

for(j=0;	j<R;	j++)
{
	for(k=0;	k<C;	k++)
	{
		printf("%d",(*arg)[(j*C)+k]);
		printf(",");
	}
	
	printf("\n");				//New Row
}	
}
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//Function accept 2D array and print it - Using memory location de-referencing
void print_my_2D_array(int *arg,int R,int C)
{
int j=0,k=0;

printf("\nPRINT 2D ARRAY - From function\n");

for(j=0;	j<R;	j++)
{
	for(k=0;	k<C;	k++)
	{
		printf("%d",*(arg + ( j * C) + k));
		printf(",");
	}
	
	printf("\n");				//New Row
}

}
//-------------------------------------------------------------------------------------------------




int main()
{
	//---------------------------------------------------------------------------------------------
	//>>(1) Create 2D Array
	int array2D[4][2] 		= {{1,2},{3,4},{5,6},{7,8}};
	int row_size,col_size;
	
	
	//>>(2) Find RxC size
	row_size = sizeof(array2D)/sizeof(array2D[0]);
	col_size = sizeof(array2D[0]) /sizeof(array2D[0][0]);
	
	printf("\nGiven 2D Array have row = %d and col = %d",row_size,col_size);
	
	
	
	//>>(3) print 2D Array
	printf("\nPRINT 2D ARRAY - inside main \n");
	int i=0,j=0;
	for(i=0; 	i < row_size;	i++)
	{
		for(j=0; 	j < col_size;	j++)
		{
			printf("%d",array2D[i][j]);
			printf(",");
		}
		
		printf("\n");									//New ROW
	}
	//---------------------------------------------------------------------------------------------	
	
	
	
	//---------------------------------------------------------------------------------------------	
	//>>(4) Print Array using function
	print_my_2D_array(array2D,row_size,col_size);   			//Actual ARG type requires int(*)[2] -- Pointer point toward 2 COL Array
	print_my_2D_array_method_2(array2D,row_size,col_size);
	
	//---------------------------------------------------------------------------------------------	
	return 0;
}
