// Bitwise operations: OR, AND, XOR, and NOT (Toggle)
//
// Note: Bitwise operations work on individual bits of data.
//       There is no concept of carry or borrow (for example, 1 + 1 = 0 in XOR).

// Important:
//   - Bitwise OR  (|)  ? Output is 1 if any input bit is 1.
//   - Bitwise AND (&)  ? Output is 1 only if both input bits are 1.
//   - Bitwise XOR (^)  ? Output is 1 if input bits are different.
//   - Bitwise NOT (~)  ? Inverts (toggles) all bits of the operand.

//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>



//---------------------------------------------------------------------------------------------
//Function : For print binary value (0-254)	
void print_BIN(int x)
{
	if(x > 255)
	{
		return;
	}
	   
	int LOCATION = 0;
	for(LOCATION = 7; LOCATION >= 0; LOCATION--)
	{
		(x & (1<<LOCATION)) ? (printf("1")) : (printf("0"));
	}
}


int main()
{
	int a,b,OR,TOGGLE,XOR;
	
	//---------------------------------------------------------------------------------------------
	//GET value from users
	printf("Enter First Number (0 to 255): ");
	scanf("%d",&a);
	printf("\nEnter Second Number (0 to 255): ");
	scanf("%d",&b);
	
	//print above values in binary Form
	printf("\nBinary Value of %d = ",a);
	print_BIN(a);
	printf("\nBinary Value of %d = ",b);
	print_BIN(b);
	
	
	//---------------------------------------------------------------------------------------------
	//Logical OR 
	OR = a | b;
	TOGGLE = ~a;
	XOR = a ^ b;
	
	printf("\n\nLogical OR = %d:",OR);
	printf("\n");
	print_BIN(a);
	printf("\nOR\n");
	print_BIN(b);
	printf("\n=\n");
	print_BIN(OR);
	
		
	printf("\n\nLogical TOGGLE = %d:",a);
	printf("\n");
	print_BIN(a);
	printf("\n=\n");
	print_BIN(TOGGLE);
	
		
	printf("\n\nLogical XOR = %d:",XOR);
	printf("\n");
	print_BIN(a);
	printf("\nXOR\n");
	print_BIN(b);
	printf("\n=\n");
	print_BIN(XOR);
	
	
	return 0;
}
