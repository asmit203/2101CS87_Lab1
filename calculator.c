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
    }
    return 0;
}
