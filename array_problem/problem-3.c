// take three array [A, B & AB] of float data type size 5. Scan the value of two Array [A & B] from user. Now assign the summation of two array to the AB. [AB] = A[] + b[] and print ab

#include <stdio.h>

int main()
{
    int A[5], B[5], AB[5];
    int i;

    printf("Enter the value of A:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the value of B:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++)
    {
        AB[i] = A[i] + B[i];
    }

    printf("value of AB :\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", AB[i]);
    }
    return 0;
}