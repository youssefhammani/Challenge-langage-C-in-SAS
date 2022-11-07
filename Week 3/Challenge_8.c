#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double n,a=-15,b=-10,m;

    while ( b-a > 0.00001)
    {
        m = (a+b)/2;

        double fa = pow(a,3)+12*pow(a,2)+1;
        double fb = pow(b,3)+12*pow(b,2)+1;
        double fm = pow(m,3)+12*pow(m,2)+1;

        if ( fa*fm <=0 )
        {
            b = m;
        }
        else
        {
            a = m;
        }
    }
    printf("La solution = %0.5f", (a+b)/2);

    return  0;
}
