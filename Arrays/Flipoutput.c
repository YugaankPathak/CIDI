#include <stdio.h>
void main()
{int A[5],i;
for(i=0;i<=4;i++)
{printf("Enter element:\n");
scanf("%d",&A[i]);}
printf("Original\n");
for(i=0;i<=4;i++)
printf("%d ",A[i]);
printf("\n");
printf("Flipped\n");
for(i=4;i>=0;i--)
printf("%d ",A[i]);
getch();
}