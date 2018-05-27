#include<stdio.h>
#include<simpleinterest.h>
int main()
{
	int principal, time;
	float c, rate;
	printf("enter the principal \n");
	scanf("%d", &principal);
	printf("enter the rate of interest \n");
	scanf("%f", &rate);
	printf("enter the time \n");
	scanf("%d", &time);
	simpcalc(principal, rate, time);
	printf("the simple interest is  \n %d", c);
}