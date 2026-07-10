/*
==========================================================
Day 07 - Const Qualifier in C
Author : Srushti Bakhare

Concepts Covered
1. const variable
2. Pointer to const
3. Const pointer
4. Const pointer to const
5. Embedded examples
==========================================================
*/

#include <stdio.h>

int main()
{
    // -----------------------------
    // Example 1 : const variable
    // -----------------------------
    const int speedLimit = 80;

    printf("Speed Limit = %d\n", speedLimit);

    // speedLimit = 90;      // Error


    // -----------------------------
    // Example 2 : Pointer to const
    // Data cannot be modified
    // Pointer can point elsewhere
    // -----------------------------
    int a = 10;
    int b = 20;

    const int *ptr1 = &a;

    printf("\nPointer to Const\n");
    printf("Value = %d\n", *ptr1);

    // *ptr1 = 15;           // Error

    ptr1 = &b;

    printf("Now points to b = %d\n", *ptr1);


    // -----------------------------
    // Example 3 : Const Pointer
    // Pointer cannot change
    // Data can change
    // -----------------------------
    int x = 100;
    int y = 200;

    int *const ptr2 = &x;

    printf("\nConst Pointer\n");
    printf("Before = %d\n", *ptr2);

    *ptr2 = 150;

    printf("After = %d\n", *ptr2);

    // ptr2 = &y;            // Error


    // -----------------------------
    // Example 4 : Const Pointer to Const
    // Neither pointer nor data changes
    // -----------------------------
    int temp = 30;

    const int *const ptr3 = &temp;

    printf("\nConst Pointer to Const\n");
    printf("Value = %d\n", *ptr3);

    // *ptr3 = 50;           // Error
    // ptr3 = &a;            // Error


    // -----------------------------
    // Embedded Example
    // -----------------------------
    const float PI = 3.14159;

    printf("\nEmbedded Constant\n");
    printf("PI = %.5f\n", PI);

    return 0;
}