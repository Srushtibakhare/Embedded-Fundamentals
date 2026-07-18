/*
==========================================================
Day 15 - Pointers and Arrays
Author : Srushti Bakhare

Concepts Covered
1. Array Name as Pointer
2. Pointer Traversal
3. Pointer Indexing
4. arr[i] vs *(arr+i)
==========================================================
*/

#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    printf("Array Base Address : %p\n", (void *)numbers);
    printf("Pointer Address    : %p\n\n", (void *)ptr);

    printf("Access using Array Index\n");

    for(int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    printf("\nAccess using Pointer\n");

    for(int i = 0; i < 5; i++)
    {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nAddress of Each Element\n");

    for(int i = 0; i < 5; i++)
    {
        printf("&numbers[%d] = %p\n", i, (void *)&numbers[i]);
    }

    return 0;
}