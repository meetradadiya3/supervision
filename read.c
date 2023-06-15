#include<stdio.h>

main()
{
	FILE *p;
	char data[1000];
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
