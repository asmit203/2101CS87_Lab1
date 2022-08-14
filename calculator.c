/*
MAKING A BASIC CALCULATOR TO DO FOLLOWING OPERATIONS:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Power
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\n*********************************************************************************************\n");
    int kill = 1;
    while (kill)
    {
        // inputs:
        float a, b;
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        printf("a = %f, b= %f\n",a,b);

        // choosing the operations:
        printf("What is the operation you will like to perform:");
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Power\n7. Exit\n");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Addition\n");
            printf("Result= (a+b)= %f\n", a + b);
            break;
        case 2:
            printf("Subtraction\n");
            printf("Result= (a-b)= %f\n", a - b);
            break;
        case 3:
            printf("Multiplication\n");
            printf("Result= (a*b)= %f\n", a * b);
            break;
        case 4:
            printf("Division\n");
            printf("Result= (a/b)= %f\n", a / b);
            break;
        case 5:
            printf("Modulus\n");
            printf("Result= (a%%b)= %f\n", fmodf(a, b));
            break;
        case 6:
            printf("Power\n");
            printf("Result= (a^b)= %f\n", pow(a, b));
            break;
        case 7:
            printf("Exit\n");
            kill = 0;
            break;
        }
        printf("\n*********************************************************************************************\n");
    }
    return 0;
}


/*
CS LAB CS230
Lab 1

SUBMITTED BY:
ASMIT GANGULY
2101CS87
*/