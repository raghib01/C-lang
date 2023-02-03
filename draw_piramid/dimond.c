#include <stdio.h>
int main(void)
{

    int i, j, row;
    int start, space;
    printf("enter row number: ");
    scanf("%d", &row);

    start = 1;
    space = row - 1;

    for (i = 1; i < row * 2; i++)
    {
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= start * 2; j++)
        {
            printf("*");
        }

        printf("\n");

        if (i < row)
        {
            space--;
            start++;
        }
        else
        {
            space++;
            start--;
        }
    }
    return 0;
}