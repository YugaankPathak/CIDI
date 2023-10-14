#include <stdio.h>
void main()
{ int i=0,n;
printf("Enter the value of n\n",n);
scanf("%d",&n);
while(1)
{i++;
if(i%2==1)
continue;
printf("%d",i);
}
getch();
}