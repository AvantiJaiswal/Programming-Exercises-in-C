#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define NULL 0
main(){
	char *buffer;
	if((buffer = (char*)malloc(7)) == NULL){
		printf("No space available");
		exit(1);
	}
	printf("Buffer of size %d is created. \n",_msize(buffer));
	strcpy(buffer, "NAGPUR");
	printf("Buffer contains: %s \n",buffer);
	
	if((buffer = (char*)realloc(buffer, 9)) == NULL){
		printf("Reallocation failed");
		exit(1);
	}
	printf("Buffer still contains: %s \n",buffer);
	strcpy(buffer, "JABALPUR");
	printf("Buffer now contains: %s \n",buffer);
	
free(buffer);
}
