//Inline function 
//Jaydeep Shah <radhey04ec@gmail.com>

/*
Inline function tells compiler to replace function call with code
It is useful for small, frequent usage function, reduce call overhead improve performance


Syntax:
same as function declaartion with inline prefix
inline (retrun_type) Fnname(Arguments...)


Not work if:
1) Funcion code is large, loops, large data structure etc.
2) If Function is Recursive
3) If optimization is disable  (Work if optimization -02 or -03) not work with (-00 Debug)
4) Work within same file, static inline. It doesnt work with extern inline (if declare somewhere else in other file)
*/

#include<stdio.h>

//-------------------------------------------------------------------------------------------------
//Inline function declaration
inline int maximum(int x,int y)
{
	if(x > y) return(x);
	else      return(y);
}
//-------------------------------------------------------------------------------------------------

int main()
{
    printf("\n>>maximum between 123 and 990 is %d",maximum(123,990));	
	printf("\n>>maximum between 223 and 11 is %d",maximum(223,11));
	return 0;
}
