 #include<stdio.h>
#include<math.h>
struct _triangle
{
  float base,height,area;
};
typedef struct _triangle triangle; 
triangle input_triangle()
{
  triangle x;
  printf("enter the value of x\n");
  scanf("%f%f",&x.base,&x.height);
  return x;
}
void find_area(triangle *t)
{  //here t is pointer to structure variable//
  t->area=0.5 * t->base * t->height;
}
void output(triangle t)
{
  printf("the area of a triangle wiht base %f and height %f is %f\n",t.base,t.height,t.area);
}
int main()
{
triangle t;
 t=input_triangle();
 find_area(&t);
 output(t);
  return 0;
}
//triangle*t is a structure variable//
  //int calling fun no need to write return type specifier//