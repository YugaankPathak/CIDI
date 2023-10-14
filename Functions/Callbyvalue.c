#include<stdio.h>
int swap(int,int);
void main()
{printf("Yugaank Pathak H-77\n"); 
int a,b;
printf("Enter number 1\n");
scanf("%d",&a);
printf("Enter number 2\n");
scanf("%d",&b);
printf("The numbers before swapping in main are %d, %d\n",a,b);
swap(a,b);
printf("The numbers after swapping in main are %d, %d\n",a,b);
}
int swap(int a, int b)
{int x;
printf("The numbers before swapping in function are %d, %d\n",a,b);
x=a;
a=b;
b=x;
printf("The numbers after swapping in function are %d, %d\n",a,b);
}