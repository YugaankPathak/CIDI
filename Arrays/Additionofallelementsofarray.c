#include <stdio.h>
void main()
{int A[10],i,sum=0;
printf("Enter element of series 1:\n");
for(i=0;i<=9;i++)
scanf("%d",&A[i]);
for(i=0;i<=9;i++)
sum=sum+A[i];
printf("Sum of all elements is %d",sum);
}