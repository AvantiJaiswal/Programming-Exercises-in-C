#include<stdio.h>
main()
{
	int age;
	char gender;
	char marital_status;
	printf("Enter age, gender and marital_status of the driver: \n");
	scanf("%2d %c %c", &age, &gender, &marital_status );
	
	if(marital_status == 'm')
	{
		if (gender == 'm' )
		printf("He is insured");
		else
		printf("She is insured");
	}
	else{
		if (gender == 'm' && age >= 30)
		printf("He is insured");
		else if (gender == 'f' && age >= 25)
		printf("She is insured");
		else{
			if (gender == 'm' )
		printf("He is not insured");
		else
		printf("She is not insured");
		}
		
	}
	return 0;
}
