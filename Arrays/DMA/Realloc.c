#include<stdio.h>
#include<stdlib.h>
void main()
{int n,*A,i,b,c;
printf("Enter size of array:\n");
scanf("%d",&n);
A=(int*)malloc(n*sizeof(int));
printf("Enter the elements of array\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("The array is:\n");
for(i=0;i<n;i++)
printf("%d",A[i]);
printf("\nDo you want to increase the size of the array?\nEnter 1 for Yes and 2 for No\n");
scanf("%d",&c);
if(c==1)
{printf("What increase in size do you need?\n");
scanf("%d",&b);
A=(int*)realloc(A,(b+n)*sizeof(int));
printf("Enter the elements of array\n");
for(i=0;i<(n+b);i++)
scanf("%d",&A[i]);
printf("The array is:\n");
for(i=0;i<(n+b);i++)
printf("%d",A[i]);}
if(c==2)
return 0;
}