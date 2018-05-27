#include<stdio.h>
main()
{
 struct employee
 {
  int id,bsal,da,ta,hra,gross;	
  char name[30];
 };
FILE *f
f=fopen("employedata.txt","w");
printf("enter no of employees");
scanf("%d",&n);
printf("enter id of employee followed by name and basic salary");
int i,n;
for(i=0;i<n;i++)
{
 da=125/100*bsal;
 ta=35/100*bsal;
 hra=1200;
 gross=da+ta+hra+bsal;
 scanf("%d %s %d %d %d %d %d",&employee.id,&employee.name,&employee.bsal);
 fprintf(f,"%d \t %s \t %d \t %d \t %d \t %d \t %d \t",employee.id,employee.name,employee.bsal,employee.da,employee.ta,employee.hra,employee.gross);

}
fclose(f);
}

