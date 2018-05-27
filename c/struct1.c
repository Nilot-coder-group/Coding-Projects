#include<stdio.h>
main()
{
	struct
	{
	   int roll;
	   char name[30];
	}std[10];
FILE *f;
int i;
f = fopen("mydata.txt","w");
printf("Enter your data");
for(i=0;i<10;i++)
{
	scanf("%d%s",&std[i].roll,&std[i].name);
	fprintf(f,"%d \t %s \n",std[i].roll,std[i].name);
}
fclose(f);
}
