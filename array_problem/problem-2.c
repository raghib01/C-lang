// Say you are given the following array of integer dATA TYPE [102, 65, -345, 232, 80, 03] Now write a program which will find the biggest integer and print integer value.

#include <stdio.h>
int main()
{
    int num[6], i;
    printf("Input 6 number: \n");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];

    for (i = 1; i < 6; i++)
    {
        if (num[i] > max)
        // lowest integer is (num[i] < max) , its answer is -345
        {
            max = num[i];
        }
    }
    printf("Max value is: %d\n", max);
    return 0;
}