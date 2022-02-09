#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the no\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && c!=b)
   {
    return 1;
   }
    else
  {
    return 0;
   }
}
void output(int a,int b,int c,int isscalene)
{
  if (isscalene ==1)
  {
  printf("it is a scalene triangle\n ");
  }
  else
  {
   printf("it is not scalene triangle\n");
  }

}
int main()
{
  int a,b,c,scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  scalene=check_scalene(a,b,c);
  output(a,b,c,scalene);
  return 0;
}