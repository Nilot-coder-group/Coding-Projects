#include<stdio.h>

int main()
{
  float bp,da,hr,gs;
  printf("please enter the basic pay of the employee \n");
  scanf("%f",&bp);
  da=1.19*bp;
  hr=0.15*bp;
  gs=bp+da+hr;
  printf("the gross salary is %f",gs);
  return 0;
}
