#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
	
	p=fopen("D:/filehandling.txt","a");
	
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
		printf("enter DATA=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfull...");
	}
	fclose(p);
	
	printf("\n=====================\n");
		p=fopen("D:/filehandling.txt","r");
	
	if(p == NULL)
	{
		printf("file could not open");
	}
	else
	{
	while(fgets(data,20,p) !=NULL)
	{
		printf("%s",data);
	}
	}
		fclose(p);
	
}

