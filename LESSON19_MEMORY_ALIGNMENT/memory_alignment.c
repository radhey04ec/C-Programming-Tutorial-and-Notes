//Memory alignment - padding
//Jaydeep Shah <radhey04ec@gmail.com>

/*
What is Memory Alignment?
Modern CPU reads memory in fixed-size blocks (like 2 bytes, 4 bytes, 8 bytes).
So the compiler places variables in memory at addresses divisible by their size.

Example:
>> int (4 bytes) ? should start at an address divisible by 4
>> double (8 bytes) ? should start at an address divisible by 8
>> short (2 bytes) ? at address divisible by 2

This rule is called alignment.

Padding:
To maintain alignment, compiler sometimes inserts extra unused bytes inside structures.
These unused bytes = padding.
Padding ensures each member starts at a correctly aligned address.

This is because CPU reads only aligned data fast.
If a 4-byte int starts at odd address (ex: address 1), CPU need extra clock cycle.

If memory optimization is case you can use following directives to turn off padding
#pragma pack(1)
*/

#include <stdio.h>

//Un-comment bellow if you want to Turn OFF padding
//#pragma pack(1)

//-------------------------------------------------------------------------------------------------
//Structure 
//Ideally actual data = 1 + 4 + 1 = 6 bytes but because of padding new structure size is 12 bytes
struct Example {
    char a;
    int b;
    char c;
};
//-------------------------------------------------------------------------------------------------


//-------------------------------------------------------------------------------------------------
//Structure with appropriate layout to reduce padding
struct Better_Example {
    int  b;   // 4 bytes
    char a;   // 1 byte
    char c;   // 1 byte
};
//-------------------------------------------------------------------------------------------------


int main() {
    printf("Size of example structure = %lu\n", sizeof(struct Example));
    printf("\nSize of better example structure = %lu\n", sizeof(struct Better_Example));
}

