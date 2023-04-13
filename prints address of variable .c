#include<stdio.h>
main()
{
	char a;
	int x;
	float p;
	
	a = 'A';
	x = 12;
	p = 34.5;
	
	printf("%c is stored at address %u.\n",a,&a);
	printf("%d is stored at address %u.\n",x,&x);	
	printf("%f is stored at address %u.\n",p,&p);	
}
