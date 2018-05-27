#include<stdio.h>
int main()
{
  int lowrange,upprange,evensum,oddsum,i;
  printf("enter the lower limit of the range \n");
  scanf("%d",&lowrange);
  printf("enter the upper limit of the range \n");
  scanf("%d",&upprange);
  for (i = lowrange; i <= upprange; i++)
  {
    if(i%2==0)
    {
    	evensum += i;
    	printf("the sum of all even numbers is %d \n",evensum);
    }
    else
    {
      	oddsum += i;
      	printf("the sum of all odd numbers is %d \n",oddsum);
    }
  }

};

