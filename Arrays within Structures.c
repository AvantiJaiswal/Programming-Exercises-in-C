#include<stdio.h>
struct marks
{
	int sub1;
	int sub2;
	int sub3;
	int total;
};
main()
{
	int i;
	struct marks student[3]= {{12,34,56,0},{78,89,90,0},{90,98,88,0}};
	struct marks total;
	for(i=0;i<=2;i++){
		student[i].total = student[i].sub1+student[i].sub2+student[i].sub3;
		
	}
	printf("STUDENT                TOTAL\n\n");
	for(i=0;i<=2;i++){
		printf("Student[%d]             %d\n",i+1,student[i].total);
	}
}
