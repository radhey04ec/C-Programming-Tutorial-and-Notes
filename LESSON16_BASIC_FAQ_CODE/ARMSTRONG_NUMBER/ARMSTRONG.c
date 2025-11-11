//Armstrong Number : xyz number is ARMSTRONG if xyz = x^3  + y^3  + z^3
//Example : 153 = 1 + 125 +27 = 153
//Jaydeep shah <radhey04ec@gmail.com>


#include<stdio.h>

int main()
{
	int NUMBER = 0;
	int SUM_OF_CUBE = 0;
	
	printf("Enter integer number = ");
	scanf("%d",&NUMBER);
	int temp = NUMBER;
	
	while(NUMBER > 0)
	{
		int reminder = NUMBER % 10;
		SUM_OF_CUBE  = SUM_OF_CUBE + (reminder * reminder * reminder);
		NUMBER 		= NUMBER / 10;
	}
	printf("\nSUM of individual digit = %d",SUM_OF_CUBE);
	
	(temp == SUM_OF_CUBE) ? (printf("\nARMSTRONG NUMBER")) : (printf("\nNOT ARMSTRONG NUMBER"));
	printf("\nDone!!!");
	
	return 0;
}
