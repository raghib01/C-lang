// Take an array fo integer data type of size 5. Scan the values from the user. print sum of even number , and sum of odd numbers in values.

#include <stdio.h>
int main()
{
    int A[5], i, sum_of_even = 0, sum_of_odd = 0;

    printf("input 5 numbers: \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &A[i]);
    }
    printf("\n");

    printf("5 number is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d   ", A[i]);

        if (A[i] % 2 == 0)
        {
            sum_of_even = sum_of_even + A[i];
        }
        else
        {
            sum_of_odd = sum_of_odd + A[i];
        }
    }
    printf("\n\n");
    printf("Sum of even values is: %d\n", sum_of_even);
    printf("Sum of odd values is: %d\n", sum_of_odd);

    return 0;
}