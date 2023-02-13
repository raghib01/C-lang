// Take an array  of integer data trype of size 10. Get input from user and store the value in the array and finally print the sum of 10 numbers.

// Answere Code here.

#include <stdio.h>
void main()
{
    int collectionOfData[10], i, sum = 0;

    printf("Input 10 numbers: \n");
    // input user number 10 number:
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &collectionOfData[i]);
    }

    // summation of number:
    for (i = 0; i < 10; i++)
    {
        sum = sum + collectionOfData[i];
    }
    printf("Total sum is:%d ", sum);
    return 0;
}