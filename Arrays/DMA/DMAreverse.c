#include<stdio.h>
#include<stdlib.h>
void main()
{printf("Yugaaank Pathak H-77\n");
int n,*A,i,*B,x;
printf("Enter size of array:\n");
scanf("%d",&n);
A=(int*)malloc(n*sizeof(int));
printf("Enter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);
B=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{x=A[i];
A[i]=B[n-i-1];
B[n-i-1]=x;}
printf("The elements of B (Reverse of A) are:\n");
for(i=0;i<n;i++)
printf("%d ",B[i]);
}
