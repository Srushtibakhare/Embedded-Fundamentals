/*
==========================================================
Day 09 - Functions in C
Author : Srushti Bakhare

Concepts Covered
1. Function Declaration
2. Function Definition
3. Function Call
4. Return Values
5. void Functions
6. Embedded Examples
==========================================================
*/

#include <stdio.h>

// Function Prototypes
void displayMessage();
int add(int a, int b);
float celsiusToFahrenheit(float celsius);

int main()
{
    int num1 = 10, num2 = 20;
    int sum;
    float temp = 25.0;

    // Calling a void function
    displayMessage();

    // Calling a function with return value
    sum = add(num1, num2);
    printf("\nSum = %d\n", sum);

    // Embedded Example
    printf("Temperature = %.2f °C\n", temp);
    printf("Temperature = %.2f °F\n",
           celsiusToFahrenheit(temp));

    return 0;
}

// Function Definition
void displayMessage()
{
    printf("Welcome to Embedded C Functions!\n");
}

// Function returning integer
int add(int a, int b)
{
    return a + b;
}

// Function returning float
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}