#include <stdio.h>
int main(int argc, char const *argv[])
{
  int n,a,b,c,d,e,f,g,h,i;
  printf("Enter the number\n",n);
  scanf("%d",&n);
  do{ a= n%10;
  c= n/10;
  d= c%10;
  f= c/10;
  g= f%10;
  h= g/10;
  i= (a+g+d);
  printf("Sum of digits is %d",i);}while(n>0&&h>0);
    return 0;
}
