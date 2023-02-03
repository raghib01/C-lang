#include <stdio.h>
int main(void)
{
    int i, j, row;
    printf("Enter ant row: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("1");
        }
        printf("\n");
    };
    return 0;
}