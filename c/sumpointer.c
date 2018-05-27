#include<stdio.h>
int main()
{
  int a,b,*pb,*pa,c;  //where *pb & *pa are pointer variables
  printf("enter two numbers \n");
  scanf("%d", &a);
  scanf("%d", &b);
  c = *pa+*pb;
  pa=&a;
  pb=&b;
  printf("the sum is %d \n",c );
}
