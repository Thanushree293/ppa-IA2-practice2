#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter the values for base and height\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=(1/2)*(base)*(height);
}
void output(float base,float height,float area)
{
  printf("area of triangle 1/2*%f*%f is %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}