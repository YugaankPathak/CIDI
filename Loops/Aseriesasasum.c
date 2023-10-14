#include<stdio.h>
void main()
{ int a,b,c;
a=0;
b=1;
for(c=0;c<=8;c=a+b)
{b=c;
a=b;
printf("%d",c);
}
}