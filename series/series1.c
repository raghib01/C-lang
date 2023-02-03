#include <stdio.h>
void main()
{
    int mark;
    printf("Enter mark: ");
    scanf("%d", &mark);
    if (mark >= 33)
    {
        printf("you will passed\n");
    }
    else
    {
        printf("fail in this exam\n");
    };
}