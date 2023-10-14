#include<stdio.h>
int swap(int*,int*);
void main()
{printf("Yugaank Pathak H-77\n"); 
int a,b;
printf("Enter number 1\n");
scanf("%d",&a);
printf("Enter number 2\n");
scanf("%d",&b);
printf("The numbers before swapping are %d, %d\n",a,b);
swap(&a,&b);
printf("The numbers after swapping are %d, %d\n",a,b);
}
int swap(int* p, int* q)
{int x;
x=*p;
*p=*q;
*q=x;
}