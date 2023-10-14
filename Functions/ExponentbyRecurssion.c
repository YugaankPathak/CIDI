#include<stdio.h>
int exp(int);
void main()
{printf("Yugaank Pathak H-77\n"); 
int a,f;
printf("Enter the number you need to raise 3 to the power of\n");
scanf("%d",&a);
f=exp(a);
printf("The answer of 3 raised to %d is %d",a,f);
}
int exp(int a)
{int i;
if(a==0)
return 1;
else
{i=exp(a-1)*3;
return i;}
}