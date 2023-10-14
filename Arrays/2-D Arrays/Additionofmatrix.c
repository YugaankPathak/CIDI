#include<stdio.h>
void main()
{int A[3][3],B[3][3],C[3][3];
int i,j;
printf("Yugaank Pathak H-77\n");
printf("Enter the elements of A:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
}
printf("Enter the elements of B:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
scanf("%d",&B[i][j]);
}
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
C[i][j]=A[i][j]+B[i][j];
}
printf("The Sum of two arrays is:\n");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{printf("%d ",C[i][j]);}
printf(“\n”);}
}
