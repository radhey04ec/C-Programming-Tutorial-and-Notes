MACRO:
It is basically pre-processor directive (It is just replacement of text)
Macro as function is very useful, it will replace with inline code, reduce function call over head
Example :#define ADD(x,y)	(x + y)


Unknown behavior because repeated evaluation
1) Example: suqare(x)   (x *x)
If user pass following thing:
int a = 10
square(++a) --- (++a   * ++a)
            --- (11 * 12) 		--  Multiple time increment


2)Prcedence issue
Example: mul(x,y)	(x * y)
If user pass mul(3 + 2,3)
-- 3 + 2 * 3   ---> First operation will be 3 * 2 = 6 and then 6 + 3 = 9
But Answer is 15

To avoid this use paranthesis around x and y
mul(x,y)   ((x)  * (y))