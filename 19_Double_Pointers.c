/*
==========================================================
Day 19 - Double Pointers
Author : Srushti Bakhare

Concepts Covered
1. Pointer to Pointer
2. Dereferencing
3. Memory Relationship
4. Modifying Value
==========================================================
*/

#include <stdio.h>

int main()
{
    int number = 50;

    int *ptr = &number;

    int **dptr = &ptr;

    printf("Value of number      = %d\n", number);
    printf("Address of number    = %p\n", (void *)&number);

    printf("\nPointer ptr          = %p\n", (void *)ptr);
    printf("Address of ptr       = %p\n", (void *)&ptr);

    printf("\nDouble Pointer dptr  = %p\n", (void *)dptr);

    printf("\nUsing *ptr           = %d\n", *ptr);
    printf("Using **dptr         = %d\n", **dptr);

    // Modify value using double pointer
    **dptr = 100;

    printf("\nAfter Modification\n");
    printf("number = %d\n", number);

    return 0;
}