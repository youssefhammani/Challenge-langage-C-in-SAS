#include <stdio.h>

int check_month(int day, int month, int year)
{
    if (month == 1)
    {
        printf("%d/January/%d\n", day, year);
    }
    else if (month == 2)
    {
        printf("%d/February/%d\n", day, year);
    }
    else if (month == 3)
    {
        printf("%d/March/%d\n", day, year);
    }
    else if (month == 4)
    {
        printf("%d/April/%d\n", day, year);
    }
    else if (month == 5)
    {
        printf("%d/May/%d\n", day, year);
    }
    else if (month == 6)
    {
        printf("%d/June/%d\n", day, year);
    }
    else if (month == 7)
    {
        printf("%d/July/%d\n", day, year);
    }
    else if (month == 8)
    {
        printf("%d/August/%d\n", day, year);
    }
    else if (month == 9)
    {
        printf("%d/September/%d\n", day, year);
    }
    else if (month == 10)
    {
        printf("%d/October/%d\n", day, year);
    }
    else if (month == 11)
    {
        printf("%d/November/%d\n", day, year);
    }
    else if (month == 12)
    {
        printf("%d/December/%d\n", day, year);
    }
    else
    {
        printf("Syntax error\n");
    }
    return (0);
}

int main()
{
    int D, M, Y;

    printf("please give a date in this order (day/month/year): ");
    scanf("%d%d%d", &D, &M, &Y);

    check_month(D, M, Y);
}
