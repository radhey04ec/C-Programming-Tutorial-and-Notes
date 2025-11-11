/*
This example shows how to verify the bit value at a certain integer point.When developing embedded firmware, bit-level operations are crucial.
*/
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>

int main()
{
	int NUMBER=0;
	int LOCATION=0;
	printf("Enter the Number : \n");
	scanf("%d",&NUMBER);
	printf("\nEnter BIT location that you want to check: \n");
	scanf("%d",&LOCATION);
	
	//Is it SET??
	((NUMBER & (1 << LOCATION))) ? (printf("\nBIT for %d at Location %d is SET",NUMBER,LOCATION)) : (printf("\nBit is not set at Location %d for given Number",LOCATION));
	return 0;
}


