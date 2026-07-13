/*
==========================================================
Day 11 - Recursion
Author : Srushti Bakhare

Concepts Covered
1. Recursive Functions
2. Base Case
3. Recursive Case
4. Factorial using Recursion
5. Sum of First N Numbers
==========================================================
*/

#include <stdio.h>

// Function Prototypes
int factorial(int n);
int sumOfNumbers(int n);

int main()
{
    int number = 5;

    printf("Factorial of %d = %d\n", number, factorial(number));

    printf("Sum of first %d numbers = %d\n",
           number,
           sumOfNumbers(number));

    return 0;
}

// Recursive factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

// Recursive sum
int sumOfNumbers(int n)
{
    if (n == 1)
        return 1;

    return n + sumOfNumbers(n - 1);
}