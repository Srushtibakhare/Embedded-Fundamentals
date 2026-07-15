/*
==========================================================
Day 14 - Pointer Arithmetic
Author : Srushti Bakhare

Concepts Covered
1. Pointer Increment
2. Pointer Decrement
3. Adding Integer to Pointer
4. Subtracting Pointers
5. Data Type Size Effect
==========================================================
*/

#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    printf("Initial Address : %p\n", (void *)ptr);
    printf("Initial Value   : %d\n\n", *ptr);

    // Pointer Increment
    ptr++;

    printf("After ptr++\n");
    printf("Address : %p\n", (void *)ptr);
    printf("Value   : %d\n\n", *ptr);

    // Pointer Decrement
    ptr--;

    printf("After ptr--\n");
    printf("Address : %p\n", (void *)ptr);
    printf("Value   : %d\n\n", *ptr);

    // Add Integer
    ptr = ptr + 3;

    printf("After ptr + 3\n");
    printf("Address : %p\n", (void *)ptr);
    printf("Value   : %d\n\n", *ptr);

    // Pointer Difference
    int *start = &numbers[0];
    int *end = &numbers[4];

    printf("Elements Between = %ld\n", end - start);

    return 0;
}