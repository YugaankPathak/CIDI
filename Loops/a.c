#include <stdio.h>
void main()
{printf("Yugaank Pathak H-77\n");
float a,b,c,d,e,f;
printf("Enter the marks of Maths\n",a);
scanf("%f",&a);
printf("Enter the marks of Science\n",b);
scanf("%f",&b);
printf("Enter the marks of Social\n",c);
scanf("%f",&c);
printf("Enter the marks of English\n",d);
scanf("%f",&d);
printf("Enter the marks of Hindi\n",e);
scanf("%f",&e);
f=((a+b+c+d+e)/5);
printf("Average is %f\n",f);
if(f<35)
printf("Fail");
else
if(35<=f&&f<50)
printf("Third Division");
else
if(50<=f&&f<65)
printf("Second Division");
else
if(65<=f&&f<75)
printf("First Division");
else
if(75<=f&&f<100)
printf("Honours");
}


