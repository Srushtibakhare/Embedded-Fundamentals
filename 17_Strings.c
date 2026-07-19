/*
==========================================================
Day 17 - Strings in C
Author : Srushti Bakhare

Concepts Covered
1. String Declaration
2. String Input & Output
3. String Length
4. String Copy
5. String Comparison
==========================================================
*/

#include <stdio.h>

int main()
{
    char str1[20] = "Embedded";
    char str2[20];
    int length = 0;
    int i;

    printf("Original String: %s\n", str1);

    // Finding Length
    while(str1[length] != '\0')
    {
        length++;
    }

    printf("Length = %d\n", length);

    // Copy String
    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("Copied String: %s\n", str2);

    // Compare Strings
    char str3[] = "Embedded";

    i = 0;

    while(str1[i] != '\0' && str3[i] != '\0')
    {
        if(str1[i] != str3[i])
        {
            break;
        }

        i++;
    }

    if(str1[i] == str3[i])
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}