/*
==========================================================
Day 16 - Arrays
Author : Srushti Bakhare

Concepts Covered
1. Array Declaration
2. Array Initialization
3. Traversing an Array
4. Sum
5. Maximum
6. Minimum
7. Average
==========================================================
*/

#include <stdio.h>

int main()
{
    int numbers[5] = {15, 8, 22, 10, 18};

    int sum = 0;
    int max = numbers[0];
    int min = numbers[0];

    printf("Array Elements:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Sum
    for(int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }

    printf("\nSum = %d\n", sum);

    // Average
    float average = (float)sum / 5;
    printf("Average = %.2f\n", average);

    // Maximum
    for(int i = 1; i < 5; i++)
    {
        if(numbers[i] > max)
            max = numbers[i];
    }

    printf("Maximum = %d\n", max);

    // Minimum
    for(int i = 1; i < 5; i++)
    {
        if(numbers[i] < min)
            min = numbers[i];
    }

    printf("Minimum = %d\n", min);

    return 0;
}