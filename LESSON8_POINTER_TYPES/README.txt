DANGLING POINTER - Points to memory location that has been free / de-allocated
- Access of dangling pointer may be undefined behaviour
- Difficult to debug error in code, because it works sometimes and fail un predicted way

NULL POINTER - Its point to nothing, assign 0 memory ADD
- HELP to detect access of invalid memory access
- Useful error handling
- Best practice is after memory free, assign NULL to pointer
- Note if derefernce NULL pointer, higher chance of segmentation fault,program crash

void pointer - Genric pointer, that can store address of any datatype
- It must be cast to correct type during dereferencing.