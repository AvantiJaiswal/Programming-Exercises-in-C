#include <stdio.h>
main(){
	FILE *fp;
	char c;
	printf("Write in textfile \n\n");
	fp = fopen("textfile","w");
	
	while((c=getchar() != EOF)){
		putc(c,fp);
	}
	fclose(fp);
	
	printf("Read from textfile \n\n");
	fp = fopen("textfile","r");
	
	while((c=getc(fp) != EOF)){
		printf("%c",c);
	}
	fclose(fp);
	
}
