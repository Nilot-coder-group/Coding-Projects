#include<area.h>
#include<stdio.h>
int main()
{
	int option,r,h,b;
	float result;
	printf("select your option \n");
	printf("1. calculate area of a circle \n");
	printf("2. calculate area of a triangle \n");
	scanf("%d",&option);
	switch(option)
{
		case 1:
		printf("enter the radius of the circle \n");
		scanf("%d",&r);
		circlearea(r);
		printf("the area is \n %d",result);
		break;
		case 2:
		printf("enter the height and breadth of the triangle \n");
		scanf("%d%d",&h,&b);
		trianglearea(h,b);
		printf("the area is \n %d",result);
		break;
		default:
		printf("invalid option");
		break;
}
}	