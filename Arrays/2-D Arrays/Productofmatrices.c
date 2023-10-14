#include<stdio.h>
void main()
{
int A[3][3],B[3][3],C[3][3],i,j,k,sum=0;
printf("Yugaank Pathak H-77\n");
printf("Enter the matrix A\n");
for(i=0;i<=2;i++)
{for(j=0;j<=2;j++)
scanf("%d",&A[i][j]);}
printf("Enter the matrix B\n");
for(i=0;i<=2;i++)
{for(j=0;j<=2;j++)
scanf("%d",&B[i][j]);}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{for(k=0;k<3;k++)
{sum=sum+(A[i][k]*B[k][j]);}
C[i][j]=sum;
sum=0;}}
printf("Product of the two matrix:\n");
for(i=0;i<=2;i++)
{for(j=0;j<=2;j++)
{printf("%d ",C[i][j]);}
printf("\n");}
}
