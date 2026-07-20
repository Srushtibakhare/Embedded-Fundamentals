/*
==========================================================
Day 18 - Multidimensional Arrays
Author : Srushti Bakhare

Concepts Covered
1. 2D Array Declaration
2. Initialization
3. Row-wise Traversal
4. Column-wise Traversal
5. Matrix Addition
==========================================================
*/

#include <stdio.h>

int main()
{
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };

    int result[2][2];

    printf("Matrix 1:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // Matrix Addition
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nResult (Matrix Addition):\n");

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}