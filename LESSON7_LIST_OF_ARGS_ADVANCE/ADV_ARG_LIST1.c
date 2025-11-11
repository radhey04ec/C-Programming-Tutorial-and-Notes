//Variable list of Argument - Advance example 1
//Jaydeep Shah <radhey04ec@gmail.com>


/*
Note : Default Argument promotion apply when you use stdarg.h
1) If your argument contains float and double -> All float value promoted to double
2) If your argument contains char,short       -> All char,short conver into integer
3) When you retrive integer value as double, it will automatically convert into double
*/
#include<stdio.h>
#include<stdarg.h>


//-------------------------------------------------------------------------------------------------
//Function declaration
double maximum(int number_of_args,...);

//-------------------------------------------------------------------------------------------------
int main()
{
	
    //Function call
	double answer = maximum(6,32,89.1235,-90.8765,100.0909,100.100987,0.098);
	printf("Maximum from given num is %f",answer);	
	return 0;
}




//-------------------------------------------------------------------------------------------------
//Function declaration
double maximum(int number_of_args,...)
{
	//>>(1) To store arguments
	va_list 		args;
	
	//>>(2) Initialize start point
	va_start(args,number_of_args);
	
	
	//(3) extarct info
	int counter = 0;
	double maxi = -999999;			//Lets consider it as smallest number
	
	for(counter = 0; counter < number_of_args; counter++)
	{
		double x = va_arg(args,double);
		if(x > maxi)  maxi = x;
	}
	
	return(maxi);
}
//-------------------------------------------------------------------------------------------------
