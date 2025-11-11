//MACRO as function
//Jaydeep Shah <radhey04ec@gmail.com>

#include <stdio.h>

//-------------------------------------------------------------------------------------------------
//MACRO as function #1
#define ADD(X,Y,Z)  	(X + Y +Z)
//-------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------
//MACRO as function #2
#define square(x)		(x * x)
#define square_care(x)  ((x) * (x))
//-------------------------------------------------------------------------------------------------


int main()
{
	
	printf("\n>>Addition using MACRO function of 12 and 13 and 37= %d",ADD(12,13,37));
	printf("\n>>Square using MACRO function of number 9 = %d",square(9));
	
	//-------------------------------------------------------------------------------------------------
	//lets understand issue with MACRO
	int 	a = 10;
	printf("\n>>Square of ++a which is 11 * 11 = 121 but MACRO answer is %d",square(++a));
	//-------------------------------------------------------------------------------------------------
	
	//-------------------------------------------------------------------------------------------------
	//Precidence issue
	printf("\nMacro have precidence issue if we dont handle it correctly !!");		
	printf("\nLets see: square of (3+2) = 5 *5 =25,but macro answer is %d",square(3+2));			// 3 + 2 * 3 + 2 = 11
	printf("\nMACRO with paranthesis (3+2) = %d",square_care(3+2));
   //-------------------------------------------------------------------------------------------------
	
	
	return 0;
}
