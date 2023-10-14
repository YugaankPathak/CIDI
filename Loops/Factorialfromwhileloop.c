#include <stdio.h>
void main()
{ int i=1,j,k=1;
printf("Please enter the number of which you need to find the factorial of\n",j);
scanf("%d",&j);
while(i<=j)
{k=k*i;
i=++i;}
printf("The factorial is %d",k);
getch();
}