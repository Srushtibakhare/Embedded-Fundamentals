/*
==========================================================
Day 13 - Pointers (Basics)
Author : Srushti Bakhare

Concepts Covered
1. Pointer Declaration
2. Pointer Initialization
3. Address-of Operator (&)
4. Dereferencing (*)
5. NULL Pointer
==========================================================
*/

#include <stdio.h>

int main()
{
    int number = 25;

    // Pointer Declaration & Initialization
    int *ptr = &number;

    printf("Value of number          = %d\n", number);
    printf("Address of number        = %p\n", (void *)&number);

    printf("\nPointer stores address   = %p\n", (void *)ptr);
    printf("Value using pointer      = %d\n", *ptr);

    // Modify value using pointer
    *ptr = 100;

    printf("\nAfter modifying using pointer:\n");
    printf("number                  = %d\n", number);
    printf("Value using pointer     = %d\n", *ptr);

    // NULL Pointer
    int *nullPtr = NULL;

    printf("\nNULL Pointer = %p\n", (void *)nullPtr);

    return 0;
}