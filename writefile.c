#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("D:/filehandling.txt","w");
	
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
		printf("enter DATA=");
		gets(data);
		fputs(data,p);
		printf("data add successfull...");
	}
	fclose(p);
}
