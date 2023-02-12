// Say you are given the following array of integer dATA TYPE [102, 65, -345, 232, 80, 03] Now write a program which will find the biggest integer and print integer value.

#include <stdio.h>
int main()
{
    int a, i;
    int num[6] = {102, 65, -345, 232, 80, 03};

    int max = num[0];
    for (i = 1; i < 5; i++)
    {
        if (i < max)
        {
            max = num[i];
        }
    }
    printf("Max value is: %d\n", max);
    return 0;
}