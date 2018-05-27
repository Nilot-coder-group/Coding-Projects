#include<stdio.h>
int main()
{
	int range_start,range_end,i;
	printf("enter starting point of the range \n");
	scanf("%d",&range_start);
	printf("enter ending point of the range \n");
	scanf("%d",&range_end);
 printf("the factors of five are given below \n");	
	for(i=range_start;i<range_end;i++)
    {
		if(i%5==0)
		printf("%d \n",i);
    }
	  
}