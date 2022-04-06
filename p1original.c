#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the values for base and height\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=(base)*(height)/2;
}
void output(float base,float height,float area)
{
  printf("area of triangle with base %f and height %f is %f\n",base,height,area);
}
int main()
{
  float b,h,area;
  input(&b,&h);
  find_area(b,h,&area);
  output(b,h,area);
  return 0;
}