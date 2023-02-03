#include <stdio.h>
int main(void)
{
    int day_number;
    printf("enter a number within 1 to 6: ");
    scanf("%d", &day_number);

    switch (day_number)
    {
    case 0:
        printf("saturday \n");
        break;
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday \n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("wednessday\n");
        break;
    case 5:
        printf("thursday\n");
        break;
    case 6:
        printf("Friday\n");
        break;

    default:
        printf("enter spacific days");
        break;
    };
}