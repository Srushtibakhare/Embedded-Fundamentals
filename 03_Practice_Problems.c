#include <stdio.h>
#include <stdbool.h>

int main()
{
    // problem 1 – Grade Calculator
    int marks = 78;

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75)
    {
        printf("Grade B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade F\n");
    }

    // Problem 2 – Even/Odd Checker
    int number = 27; 
    if (number % 2 == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    
    //Problem 3 – Largest of Two Numbers
    int num1 = 45;
    int num2 = 78;
    if (num1 > num2)
    {
        printf("Largest number= %d\n", num1);
    }
    else 
    {
        printf("Largest number= %d\n", num2);
    }

    //Problem 4 – Fan Controller
    int temperature = 38;

    if (temperature >= 35)
    {
        printf("Fan On\n");
    }
    else 
    {
        printf("Fan off\n");
    }
    return 0;
}