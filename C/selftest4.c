#include<stdio.h>
int main()
{
	int rangestart,rangeend,i;
	printf("enter starting and ending points of range \n"); 
	scanf("%d",&rangestart);
    scanf("%d",&rangeend);
    printf("the factors of five are \n");    for(i=rangestart;i<=rangeend;i++)
    {
    	if(i%5==0)
    	{
    	printf("%d \n",i);
    	}
    }
}