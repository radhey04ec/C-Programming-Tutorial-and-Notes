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

How to know inline worked or just function call?
1) Generate assembly code (.s file / .asm), Here if you find call and function name that means inline was not apply
2) Use break point (Less reliable method), if break point work - then  higher chance function was not inlined.