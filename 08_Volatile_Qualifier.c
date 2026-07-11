/*
==========================================================
Day 08 - Volatile Qualifier
Author : Srushti Bakhare

Concepts Covered
1. volatile variable
2. Compiler optimization
3. Hardware register example
4. Interrupt flag example
5. const volatile
==========================================================
*/

#include <stdio.h>

volatile int sensorReady = 0;

int main()
{
    printf("Initial Sensor Flag = %d\n", sensorReady);

    sensorReady = 1;

    printf("Updated Sensor Flag = %d\n", sensorReady);

    // -----------------------------
    // Hardware Register Example
    // -----------------------------
    volatile unsigned int ADC_Register = 1023;

    printf("\nADC Register Value = %u\n", ADC_Register);

    // -----------------------------
    // Interrupt Flag Example
    // -----------------------------
    volatile int interruptFlag = 0;

    printf("\nInterrupt Flag Before = %d\n", interruptFlag);

    interruptFlag = 1;

    printf("Interrupt Flag After = %d\n", interruptFlag);

    // -----------------------------
    // const volatile Example
    // -----------------------------
    const volatile int deviceID = 1001;

    printf("\nDevice ID = %d\n", deviceID);

    return 0;
}