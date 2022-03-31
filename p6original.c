#include<stdio.h>
#include<string.h>
char input_string(char *a)
{
  printf("Enter the string\n");
  scanf("%s",a);
}
char str_reverse(char *str)
{
   char temp;
   int i=0, j = 0;
   j = strlen(str) - 1;
 
   while (i < j) 
     {   
       temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
     }
  
  } 
 void output( char *reversea)
{
  
  printf("The reverse string is %s",reversea );

}
int main()
{
  char str[20];
  input_string(str);
  str_reverse(str);
  output(str);
}  
  