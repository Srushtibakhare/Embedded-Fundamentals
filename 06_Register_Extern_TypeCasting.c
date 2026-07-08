#include <stdio.h>

// Global variable (used with extern)
int temperature = 35;

// ===============================
// register Storage Class
// ===============================
void registerExample()
{
    register int i;

    printf("Register Variable Example:\n");

    for(i = 1; i <= 5; i++)
    {
        printf("%d ", i);
    }

    printf("\n");
}

// ===============================
// extern Storage Class
// ===============================
void externExample()
{
    extern int temperature;

    printf("Temperature = %d C\n", temperature);
}

// ===============================
// Type Casting Example
// ===============================
void typeCastingExample()
{
    int a = 10;
    int b = 3;

    float result1 = a / b;            // Integer Division
    float result2 = (float)a / b;     // Explicit Type Casting

    printf("\nType Casting Example\n");
    printf("Without Type Casting = %.2f\n", result1);
    printf("With Type Casting    = %.2f\n", result2);
}

// ===============================
// Main Function
// ===============================
int main()
{
    printf("===== REGISTER =====\n");
    registerExample();

    printf("\n===== EXTERN =====\n");
    externExample();

    printf("\n===== TYPE CASTING =====\n");
    typeCastingExample();

    return 0;
}