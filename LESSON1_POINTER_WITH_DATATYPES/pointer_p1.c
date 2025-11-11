//Pointer Example - Part1
//Jaydeep Shah <radhey04ec@gmail.com>

/*
Code: About how to use pointers with different data types.

NOTE:
>> The size of a pointer does not depend on the data type it points to; it depends on the system architecture.
On a 32-bit system, it is 4 bytes.
On a 64-bit system, it is 8 bytes.
This is because a pointer stores a memory address, and the number of bytes required to store an address is determined by the system’s address bus width, not by the data type it points to.

>> The size of long depends on the system; it may be either 4 bytes or 8 bytes.

>> If you need to store a value in 64 bits (8 bytes), use long long or uint64_t.
long long guarantees 8-byte storage.
*/


#include<stdio.h>

int main()
{
	//---------------------------------------------------------------------------------------------
	//>>(1) Create individual varaible of different data types
	int 		a = 10;                         //Size of int is depend on system,may be 16bit or 32 bit
	float       b = 3.14;						//float use for store floating point number with precision 7 to 8 digit
	char 		c = 'J';
	double      d = -90.10;						//double is use for store floating point number - precision 14 to 15 decimal (Size=8 bytes)
	long        e = 123456789;					//long is use to store integer type numbers (size is 4 or 8 bytes).Size depnds on data model -32 bit,64 bit  windows/linux
	long long   f = 12345678912345;             //long long is use to store integer (size 8 bytes)
	
	//>>(2) Create pointer varaibles to point out above varaibles
	int 		*p_int;
	float 		*p_flt;
	char		*p_char;
	double      *p_dbl;
	long        *p_lng;	
	long long   *p_lng_lng;
	
	//>>(3) assignment memory address to pointer varaibles
	p_int 		= &a;
	p_flt		= &b;
	p_char      = &c;
	p_dbl		= &d;
	p_lng		= &e;
	p_lng_lng   = &f;
	
	//>>(4) Print with help of pointer var.
	printf("\nPrint integer var ''a'' using pointer = %d",*p_int);				//Specifier %d to print integer
	printf("\nPrint float var 'b' using pointer = %f",*p_flt);					//Specifier %f to print float
	printf("\nPrint character var 'c' using pointer = %c",*p_char);				//Specifier %c to print character
	printf("\nPrint double var 'd' using pointer = %f",*p_dbl);					//Specifier %f to print double
	printf("\nPrint long var 'e' using pointer = %ld",*p_lng);					//Specifier %ld to print long
	printf("\nPrint long long var 'f' using pointer = %lld",*p_lng_lng);		//Specifier %ld to print long
	//---------------------------------------------------------------------------------------------
	
	
	
	printf("\n\n");
	printf("---------------------------------------------------------------------------------------------");
	
	
	
	
	//---------------------------------------------------------------------------------------------
	//>>(5) Print sizes
	//Note : Here I use %lu - long unsigned as specifier (because sizeof() function return long unsigned type var)
	printf("\nSize of integr var 'a' and it's pointer var 'p_int' is %lu and %lu",sizeof(a),sizeof(p_int));
	printf("\nSize of float var 'b' and it's pointer var 'p_flt' is %lu and %lu",sizeof(b),sizeof(p_flt));
	printf("\nSize of char var 'c' and it's pointer var 'p_char' is %lu and %lu",sizeof(c),sizeof(p_char));
	printf("\nSize of double var 'd' and it's pointer var 'p_dbl' is %lu and %lu",sizeof(d),sizeof(p_dbl));
	printf("\nSize of long var 'e' and it's pointer var 'p_lng' is %lu and %lu",sizeof(e),sizeof(p_lng));
	printf("\nSize of long long var 'f' and it's pointer var 'p_lng_lng' is %lu and %lu",sizeof(f),sizeof(p_lng_lng));
	//---------------------------------------------------------------------------------------------
	
	
	printf("\n\n");
	
	return 0;
}
