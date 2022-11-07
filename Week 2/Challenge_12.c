#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double x1,y1,x2,y2,c,b;
    double dist_1,dist_2,dist;

    printf("Enter the x1 and y1\n");
    scanf("%lf%lf",&x1,&y1);

    printf("Enter the x2 and y2\n");
    scanf("%lf%lf",&x2,&y2);

    printf("Enter the a and b\n");
    scanf("%lf%lf",&a,&b);

    dist_1 = sqrt((x1-a)(x1-a) + (y1-b)(y1-b)); 
    dist_2 = sqrt((x2-a)(x2-a) + (y2-b)(y2-b));

    dist = sqrt((x1-x2)(x1-x2) + (y1-y2)(y1-y2));

    if (dist == dist_1 + dist_2) 
        printf("The point is on the segmen: \n");
    else
        printf("The point is not on the segment: \n");
    return 0;
}_
