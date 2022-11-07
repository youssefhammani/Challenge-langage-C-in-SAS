#include <stdio.h>

int main()
{
	//var
	char    First_name[20], Last_name[20], Sex[20];
	int Age = 0, nbr_tele;
	
    printf("--------Enter your information--------\n\n");
	printf("Enter your First name: ");
	scanf("%s",&First_name[20]);
	printf("Enter your Last name: ");
	scanf("%s",&Last_name[20]);
	printf("Enter your Age: ");
	scanf("%d",&Age);
	printf("Enter your Gender: ");
	scanf("%s",&Sex[20]);
	printf("Enter your phone number: ");
	scanf("%d",&nbr_tele);

    printf("\n\n --------View your information--------\n\n");
    printf("\tYour First name: %s\n", First_name);
    printf("\tYour Last name: %s\n", Last_name);
    printf("\tYour Age name: %d\n", Age);
    printf("\tYour Gender: %s\n", Sex);
    printf("\tYour phone number: %d\n", nbr_tele);

	return 0;
}
