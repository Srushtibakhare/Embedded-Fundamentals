/*
------------------------------------------------------------
File    : 01_Data_Types_and_Memory_Layout.c
Author  : Srushti Bakhare
Date    : 01 July 2026

Concepts Covered:
1. int
2. float
3. char
4. bool
5. Variables
6. Memory Addresses
7. Address-of Operator (&)
8. Memory Layout Basics

Project Connection:
Smart Industrial Monitoring System

------------------------------------------------------------
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    //variable declaration
    int age = 22; 
    int marks = 95;
     
    float temperature = 36.5f;
    float voltage = 5.0f;

    char grade = 'A';

    bool isPassed = true;

    //display values

    printf("Variable Values\n\n");

    printf("Age : %d\n", age);
    printf("Marks : %d\n", marks);
    printf("Temperature : %.1f\n", temperature);
    printf("Voltage : %.1f\n", voltage);
    printf("Grade : %c\n", grade);
    printf("Passed : %s\n\n", isPassed? "TRUE" : "FALSE");

    //display memory addresses

    printf("========== Memory Addresses ==========\n\n");

    printf("%-15s %-12s %-18s\n", "Variable", "Value", "Address");
    printf("------------------------------------------------------\n");

    printf("%-15s %-12d %p\n", "age", age, (void *)&age);
    printf("%-15s %-12d %p\n", "marks", marks, (void *)&marks);
    printf("%-15s %-12.1f %p\n", "temperature", temperature, (void *)&temperature);
    printf("%-15s %-12.1f %p\n", "voltage", voltage, (void *)&voltage);
    printf("%-15s %-12c %p\n", "grade", grade, (void *)&grade);
    printf("%-15s %-12s %p\n", "isPassed",
           isPassed ? "TRUE" : "FALSE",
           (void *)&isPassed);

    //==============================
    // Understanding Variables
    //==============================

    printf("\n========== Observation ==========\n\n");

    printf("Variable Name : temperature\n");
    printf("Value         : %.1f\n", temperature);
    printf("Address       : %p\n", (void *)&temperature);

    printf("\nAs programmers, we use variable names.\n");
    printf("The CPU accesses data using memory addresses.\n");

    return 0;
}