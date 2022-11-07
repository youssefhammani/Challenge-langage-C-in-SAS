#include <stdio.h>

void    print_result(int ctr, int min_num, int max_num, int resutl, double avg)
{
    avg = resutl / (double) ctr;

    printf("\nNumber of positive values entered is %d\n", ctr);
    printf("Maximum value entered is %d\n", max_num);
    printf("Minimum value entered is %d\n", min_num);
    printf("Average value is %0.2lf\n", avg);
    printf("result: %d\n", resutl);
}

int main()
{
    int nb, max_num, min_num, ctr = 0, s = 0;
    double avg;

    printf("Input a positive integer: ");
    scanf("%d", &nb);

    while (nb > 0 && nb <= 100) 
    {
        min_num = nb;
        max_num = nb;

        while (nb > 0)
        {
            s += nb;
            ctr++;

            max_num = nb > max_num ? nb : max_num;
            min_num = nb < min_num ? nb : min_num;

            printf("Input next positive integer: ");
            scanf("%d", &nb);
        }
        while (nb < 0)
        {
            printf("Input next_1 positive integer: ");
            scanf("%d", &nb);
        }
        if (nb == 0)
        {
            print_result(ctr, min_num, max_num, s, avg);
        }
    }
    return 0;
}
