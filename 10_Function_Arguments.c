/*
==========================================================
Day 10 - Function Arguments & Parameter Passing
Author : Srushti Bakhare

Concepts Covered
1. Function Parameters
2. Function Arguments
3. Pass by Value
4. Local Variables
5. Pass by Reference using Pointers
==========================================================
*/

#include <stdio.h>

// Function Prototypes
void displayNumber(int num);
int square(int num);
void swap(int *a, int *b);

int main()
{
    int x = 10;
    int y = 20;

    printf("Before displayNumber(): x = %d\n", x);
    displayNumber(x);

    printf("\nSquare of %d = %d\n", x, square(x));

    printf("\nBefore Swap\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swap\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

// Function with one parameter
void displayNumber(int num)
{
    printf("Received Number = %d\n", num);

    num = 100;

    printf("Modified Inside Function = %d\n", num);
}

// Function returning a value
int square(int num)
{
    return num * num;
}

// Pass by Reference using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}