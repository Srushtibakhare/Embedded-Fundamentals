#include <stdio.h>

// ===============================
// Auto Storage Class Example
// ===============================

void autoExample()
{
    int count = 0;      // By default, local variables are auto
    count++;

    printf("Auto Count = %d\n", count);
}

// ===============================
// Static Storage Class Example
// ===============================

void staticExample()
{
    static int count = 0;   // Created only once
    count++;

    printf("Static Count = %d\n", count);
}

int main()
{
    printf("===== AUTO =====\n");

    autoExample();
    autoExample();
    autoExample();

    printf("\n===== STATIC =====\n");

    staticExample();
    staticExample();
    staticExample();

    return 0;
}