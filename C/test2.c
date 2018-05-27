#include<stdio.h>
#include<operations.h>
void main()
{
	int a,b,option;
	printf("enter two numbers \n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Select your option \n");
    printf("1. add the numbers \n");
    printf("2. multiply the numbers \n");
    printf("3. divide the numbers \n");
    printf("4. subtract the numbers \n");
    scanf("%d",&option);
    switch(option)
    {
    	case 1:
    		add(a,b);
    		break;
    	case 2:
    		multiply(a,b);
    		break;
    	case 3:
    		divide(a,b);
    		break;
    	case 4:
    		subtract(a,b);
    		break;
    	default:
    		printf("invalid");
    		break;
       }
}