#include <stdio.h>
int main(void)
{
    int i, j, row;
    printf("give me some row:");
    scanf("%d", &row);
    for (i = 0; i < row; i++)
    {
        for (j = i + 1; j < row; j++)
        {
            printf(" ");
        };
        for (j = 0; j < (2 * i) - 1; j++)
        {
            printf("*");
        };
        printf("\n");
    }
    return 0;
}