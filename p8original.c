#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef _triangle Triangle
int input_n()
{
  int n;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle k;
  printf("Enter the base and altitude\n");
  scanf("%f %f",&k.base,&k.altitude);
  return k;
}
void input_n_triangles(int n, triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    t[i]=input_triangle();
  } 
} 
void find_area(Triangle *t)
{
   t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[n]);
{
  for(int i=0;i<n;i++)
    find_areas_n(&t[i]);
} 
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  int small=t[0];
  for(int i=1;i<n;i++)
    { 
    if(small.area>t[i].area)
    {
        small=t[i].area;
    }
      return small;
}
void output(int n, Triangle t[n],Triangle smallest)
{
  for(int i=0;i<n;i++)
    printf("%f %f",t[i].base,t[i].altitude);
  printf("%f %f\nis\ntriangle with base=%f and altitude=%f having area =%f\n",t[n-1].base,t[n-1].altitude,smallest.base,smallest.altitude,samllest.area])
} 
  int main();
  {
    int n;
    Triangle t;
    n=input_n();
    t=input_triangle();
    input_n_triangles(n,t);
    find_area(&t);
    find_areas_n( n,t);
    small=find_smallest_triangle(n,t);
    output(n,t,small);
    return 0;
  }