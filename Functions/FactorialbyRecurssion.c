#include<stdio.h>
int factorial(int);
void main()
{printf("Yugaank Pathak H-77\n"); 
int a,f;
printf("Enter the number you need to find the factorial of\n");
scanf("%d",&a);
f=factorial(a);
printf("The factorial of %d is %d",a,f);
}
int factorial(int a)
{int i;
if(a<=1)
return 1;
else
{i= a*factorial(a-1);
return i;}
}