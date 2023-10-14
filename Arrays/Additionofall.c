#include <stdio.h>
void main()
{int A[10],i,B[10],sum;
printf("Enter element of series 1:\n");
for(i=0;i<=9;i++)
scanf("%d",&A[i]);
printf("Enter elements of series 2:\n");
for(i=0;i<=9;i++)
scanf("%d",&B[i]);
for(i=0;i<=9;i++)
{sum=A[i]+B[i];
printf("The sum of %dth elements is %d\n",i,sum);}
}

