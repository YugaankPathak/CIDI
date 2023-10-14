#include <stdio.h>
void main()
{char A[20],d;
int i;
{printf("Enter element:\n");
for(i=0;i<=19;i++)
scanf("%c",&A[i]);}
printf("Enter element to be searched\n",d);
scanf("%c",&d);
for(i=0;i<=19;i++)
{if(A[i]==d)
{printf("%c exists",d);
break;}}
getch();
}
