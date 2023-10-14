#include <stdio.h>
void main()
{int A[10],i,d,m;
m=0;
{printf("Enter element:\n");
for(i=0;i<=9;i++)
scanf("%d",&A[i]);}
printf("Enter element to be searched\n",d);
scanf("%d",&d);
for(i=0;i<=9;i++)
{if(A[i]==d)
{m++;
printf("%d exists",d);
break;}}
if(m==0)
printf("Entry not found");
getch();
}
