#include<stdio.h>
int main()
{
		int i,sum;
		for(i=0;i<10;i++)
		{
		 if(i%5==0||i%3==0)
		 			sum=i+(i+1);
		}
		printf("%3d",sum);
}