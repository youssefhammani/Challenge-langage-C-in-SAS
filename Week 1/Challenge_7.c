#include <stdio.h>
#include <stdlib.h>

int main (int ac, char  *av[])
{
    int a,b,result;
    char flag;
    int i = 0;

    if (ac == 4)
    {
        a    = atoi(av[1]);
        flag = av[2][i];
        b    = atoi(av[3]);

        if (flag == '+')
            result = a + b;
        else if (flag == '-')
            result = a - b;
        else if (flag == '/')
            result = a / b;
        else if (flag == '*')
            result = a * b;
        else if (flag == '%')
        {
            if ( b == 0)
                return (0);
            else
                result = a % b;
        }
        printf("result is: --> %d\n",result);
    }
    else 
        printf("Syntax Error\n");
}
