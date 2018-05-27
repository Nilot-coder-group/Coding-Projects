#include<stdio.h>
int main()
{
	struct
	{
	 int  roll,m1,m2,m3;
	 char name[30];
	}std;
int i;
FILE *f;
f = fopen("mydata.txt","a");
printf("enter your roll");
scanf("%d",&std.roll);
printf("enter your name followed by your marks in each subject");
while(std.roll!=0)
{
 scanf("%s %d %d %d",&std.name,&std.m1,&std.m2,&std.m3);
 fprintf(f,"%d \t %s \t %d \t %d \t %d \t",std.roll,std.name,std.m1,std.m2,std.m3);
}
fclose(f);
}

