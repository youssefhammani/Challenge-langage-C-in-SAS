#include <stdio.h>

int main() {
       int Hour_1, minute_1, second_1, Hour_2, minute_2, second_2;
	   printf("-------------------1-----------------------\n");
   printf ("Enter the hours: ");
   scanf("%d",&Hour_1);
   printf ("Enter the minutes: ");
   scanf("%d",&minute_1);
   printf ("Enter the seconds: ");
   scanf("%d",&second_1);
   
   printf("Entry time is : %d : %d : %d", Hour_1,minute_1,second_1);
   
   printf("\n-------------------2-----------------------\n");
   printf ("Enter the hours: ");
   scanf("%d",&Hour_2);
   printf ("Enter the minutes: ");
   scanf("%d",&minute_2);
   printf ("Enter the seconds: ");
   scanf("%d",&second_2);
   
   printf("Entry time is : %d : %d : %d \n", Hour_2,minute_2,second_2);
 
	int Time_1 = Hour_1*3600 + minute_1*60 + second_1;
	int Time_2 = Hour_2*3600 + minute_2*60 + second_2;
	
	if(Time_1 < Time_2)
	{
	    printf("The first moment comes before the second\n");
    	}
	else if (Time_1 > Time_2)
	{
		printf("The second moment comes before the first\n");	
	}
	else
	{
		printf("It is the same moment.\n");
	}
	return 0; 
}
