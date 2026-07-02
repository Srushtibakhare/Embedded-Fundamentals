#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Arithematic Operators
    int a = 20; 
    int b = 6;
    float x = 20.0 / 6;
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);
    printf("Float Division = %.2f\n", x);


    // Relational Operators
    int temperature = 65;

    if (temperature > 60)
    {
        printf("Warning! High Temperature\n");
    }
    else
    {
        printf("Temperature Normal\n");
    }
    printf("temperature == 65 : %d\n", temperature == 65);
    printf("temperature != 60 : %d\n", temperature != 60);
    printf("temperature < 100 : %d\n", temperature < 100);
    printf("temperature >= 65 : %d\n", temperature >= 65);

    // Logical Operators
    bool doorClosed = true;
    bool waterAvailable = true;

    printf("=== Logical Operators ===\n");

    if (doorClosed && waterAvailable)
    {
        printf("Machine Started\n");
    }
    else
    {
        printf("Cannot Start Machine\n");
    }

    if (doorClosed || waterAvailable)
    {
        printf("At least one condition is true\n");
    }

    if (!doorClosed)
    {
        printf("Door is Open\n");
    }
    else
    {
        printf("Door is Closed\n");
    }

    printf("\n");

    // Bitwise Operators
    int num1 = 10;
    int num2 = 6;

    printf("=== Bitwise Operators ===\n");
    printf("10 & 6 = %d\n", num1 & num2);
    printf("10 | 6 = %d\n", num1 | num2);
    printf("10 ^ 6 = %d\n", num1 ^ num2);
    printf("10 << 1 = %d\n", num1 << 1);
    printf("10 >> 1 = %d\n", num1 >> 1);

    
    return 0;
}