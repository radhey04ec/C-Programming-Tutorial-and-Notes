What is Memory Alignment?
Modern CPU reads memory in fixed-size blocks (like 2 bytes, 4 bytes, 8 bytes).
So the compiler places variables in memory at addresses divisible by their size.

Example:
>> int (4 bytes) → should start at an address divisible by 4
>> double (8 bytes) → should start at an address divisible by 8
>> short (2 bytes) → at address divisible by 2

This rule is called alignment.

Padding:
To maintain alignment, compiler sometimes inserts extra unused bytes inside structures.
These unused bytes = padding.
Padding ensures each member starts at a correctly aligned address.

This is because CPU reads only aligned data fast.
If a 4-byte int starts at odd address (ex: address 1), CPU must do.

If memory optimization is case you can use following directives to turn off padding
#pragma pack(1)
