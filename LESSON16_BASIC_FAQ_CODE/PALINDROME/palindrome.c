//Is given string palindrome (REVERSE STRING SAME)?
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>
#include<string.h>

int main()
{
	//Variables ...
	char data[50];			//Store user input data
	int  length = 0;		//Store string length
	
	//Take input from user 
	printf("Enter string = ");
	fgets(data,50,stdin);
	length = strlen(data);
	printf("\nString length = %d\n",length);  //String length with Null termination - Ex: "Jay" strig length is 4
	
	int i = 0, j = 0,flag  = 0;
	//i = length - 2, to avoid Null Termination character and because array follow zero indexing
	for(i = (length - 2); j <= i; i--,j++)
	{
		if(data[i] != data[j])
		{
			flag = 1;
			break;
		}
		flag = 0;
	}
	
	if(flag == 1)
	{
		printf("\nString is not palindrome !!!");
	}
	else
	{
		printf("\nString is palindrome !!!");
	}
	return 0;
}
