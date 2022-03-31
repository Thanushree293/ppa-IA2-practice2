
#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the size of the array\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
  printf("enter the array values\n");
  
  
  for(int i=0;i<n;i++)
  {
    
    scanf("%d",&a[i]);
  }
}
int  iscomposite_numbers(int n)
{
  
  for(int i=2;i<=n/2;i++)
    {
    if(n%i==0)
    return 1;
    }  
  return 0;
}
    
int sum_composite_numbers(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
    if(iscomposite_numbers(a[i]))
    {
      sum=sum+a[i];
    }
  return sum;
  }

void output(int sum)
{
  printf("The sum of composite numbers is %d",sum);

}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  iscomposite_numbers(n);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;

}