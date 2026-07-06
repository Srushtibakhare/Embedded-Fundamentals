#include <stdio.h>

// Storage Class: auto
void autoExample()
{
    auto int count = 1;   // 'auto' is optional
    count++;

    printf("Auto Count = %d\n", count);
}

// Storage Class: static

void staticExample()
{
    static int count = 1;
    count++;

    printf("Static Count = %d\n", count);
}

// Storage Class: register

void registerExample()
{
    register int speed = 100;

    printf("Motor Speed = %d RPM\n", speed);
}

// Global Variable (used for extern)
int temperature = 35;

// Storage Class: extern

void externExample()
{
    extern int temperature;

    printf("Temperature = %d C\n", temperature);
}

int main()
{
    printf("===== AUTO =====\n");
    autoExample();
    autoExample();

    printf("\n===== STATIC =====\n");
    staticExample();
    staticExample();

    printf("\n===== REGISTER =====\n");
    registerExample();

    printf("\n===== EXTERN =====\n");
    externExample();

    return 0;
}