//Find string lenght using different methods
//Jaydeep Shah <radhey04ec@gmail.com>


#include<stdio.h>
#include<string.h>


int main()
{
	//Varaible to store user input string
	char store_data[50];
	
	printf("Enter string : ");
	fgets(store_data,sizeof(store_data),stdin);
	
	//Method -1
	int counter = 0;
	while(store_data[counter] != '\0')
	{
		counter++;
	}
	
	//Method -2
	int length = strlen(store_data);
	
	//Method -3
	char *ptr = NULL;
	ptr = store_data;			//or ptr = &store_data[0]
	int counter1 = 0;
	//We can use ptr like ARRAY
	//Note : Here we use pointer, we can no use store_data++, otherwise string start location will be changed, or we can say that string data will be destroyed
	while(*ptr != '\0')
	{
		ptr++;
		counter1++;
	}
	
	printf("\nString length using method#1 = %d",counter);
	printf("\nString length using method#2 = %d",length);
	printf("\nString length using method#3 = %d",counter1);
	return 0;
}
