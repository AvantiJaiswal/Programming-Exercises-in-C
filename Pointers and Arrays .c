#include <stdio.h>
main(){
	int *p,sum,i;
	int x[5] = {12,34,56,78,90};
	i=0;
	p = x;
	printf("Element             Value              Address\n\n");
	while(i<5){
		printf("x[%d]                %d                %u\n", i,*p , p);
		sum = sum + *p;
		i++; p++;
		
	}
	printf("\n Sum = %d\n", sum);
	printf("\n &x[0] = %u\n", &x);
	
	
}
