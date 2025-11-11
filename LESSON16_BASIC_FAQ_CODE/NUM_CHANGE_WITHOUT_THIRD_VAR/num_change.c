//Number interchange without third variable 
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>


int main()
{
	int a = 12;
	int b = 233;
	
	printf("Before Interchange a = %d and b = %d",a,b);
	//Logic !!!
	b = a + b;
	a = b - a;
	b = b - a;
	printf("\nAfter Interchange a = %d and b = %d",a,b);
	return 0;
}
