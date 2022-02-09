#include<stdio.h>
#include<math.h>
struct _triangle
{
  float b,h,area;
};
typedef struct _triangle triangle; 
triangle input_triangle(triangle *b,triangle *h)
{
  
  printf("enter the value of base and height\n");
  scanf("%f %f", b,h);
}
triangle find_area(triangle b,triangle h,triangle *area)
{  
  *area=(b*h)/2;
  return *area;
}
void output(triangle a,triangle b,triangle area)
{
  printf("the area of a triangle is %f",area);

}
int main()
{
  triangle a,b,c;
  input_triangle(&a,&b);
  c =find_area(a,b,&c);
  output(a,b,c);
  return 0;
}