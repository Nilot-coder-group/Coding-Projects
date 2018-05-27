#include<stdio.h>
void main()
{
  int distance,distm,distcm,distin;
  char option;
  printf("enter the distance in kms \n");
  scanf("%d",&distance);
  distm=distance*1000;
  distin=distance*39;
  distcm=distance*distm*100;
  printf("please select option below \n");
  printf("to calculate distance in inches press a \n");
  printf("to calculate distance in metres press b \n");
  printf("to calculate distance in centimetres press c \n");
  scanf("%s",&option);
  switch(option)
  {
    case 'a':
    printf("the distance in inches is %d inches\n",distin);
    break;
    case 'b':
    printf("the distance in metres is %d metres \n",distm);
    break;
    case 'c':
    printf("the distance in centimetres is %d cms \n",distcm);
    break;
    default:
    printf("invalid option \n");
    break;
  }
}
