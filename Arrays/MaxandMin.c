#include <stdio.h>
void main()
{int A[10],i,min,max;
printf("Enter element:\n");
for(i=0;i<=9;i++)
scanf("%d",&A[i]);
max=A[0];
min=A[0];
for(i=1;i<10;i++)
{if(min>=A[i])
min=A[i];
if(max<=A[i])
max=A[i];
}
printf("The greatest number is %d\n",max);
printf("The smallest number is %d\n",min);
getch();
}