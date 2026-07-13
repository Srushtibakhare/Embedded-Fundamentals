/*
==========================================================
Day 12 - Practice Problems (Revision 2)
Author : Srushti Bakhare

Topics Covered
1. Storage Classes
2. const
3. volatile
4. Type Casting
5. Functions
6. Pass by Value
7. Static Variables
8. Recursion

==========================================================
*/

#include <stdio.h>

// Global Variable
int globalCounter = 10;

// Volatile Variable
volatile int sensorFlag = 0;

// Function Prototypes
void staticCounter();
int square(int num);
int factorial(int n);

int main()
{
    printf("========== Practice Problems ==========\n");

    // -----------------------------
    // Problem 1 : const
    // -----------------------------
    const float PI = 3.14159;
    printf("\n1. Const Variable\n");
    printf("PI = %.5f\n", PI);

    // -----------------------------
    // Problem 2 : volatile
    // -----------------------------
    printf("\n2. Volatile Variable\n");
    printf("Sensor Flag Before = %d\n", sensorFlag);

    sensorFlag = 1;

    printf("Sensor Flag After = %d\n", sensorFlag);

    // -----------------------------
    // Problem 3 : Type Casting
    // -----------------------------
    int marks = 95;
    float percentage = (float)marks / 100;

    printf("\n3. Type Casting\n");
    printf("Percentage = %.2f\n", percentage);

    // -----------------------------
    // Problem 4 : Function
    // -----------------------------
    printf("\n4. Function\n");
    printf("Square of 8 = %d\n", square(8));

    // -----------------------------
    // Problem 5 : Static Variable
    // -----------------------------
    printf("\n5. Static Variable\n");

    staticCounter();
    staticCounter();
    staticCounter();

    // -----------------------------
    // Problem 6 : Recursion
    // -----------------------------
    printf("\n6. Recursion\n");
    printf("Factorial of 5 = %d\n", factorial(5));

    // -----------------------------
    // Problem 7 : Global Variable
    // -----------------------------
    printf("\n7. Global Variable\n");
    printf("Global Counter = %d\n", globalCounter);

    // -----------------------------
    // Problem 8 : register
    // -----------------------------
    register int i;

    printf("\n8. Register Variable\n");

    for(i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

// Static Variable Example
void staticCounter()
{
    static int count = 0;

    count++;

    printf("Function Called %d time(s)\n", count);
}

// Function
int square(int num)
{
    return num * num;
}

// Recursive Function
int factorial(int n)
{
    if(n == 1)
        return 1;

    return n * factorial(n - 1);
}