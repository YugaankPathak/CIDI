#include <stdio.h>
void main()
{int i,n,f=1;
printf("Please enter the number for which you have to find the factorial\n",n);
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("The factorial of %d is %d",n,f);
getch();
}
