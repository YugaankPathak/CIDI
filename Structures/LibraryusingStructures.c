#include<stdio.h>
struct Books
{ char name[100];
int pages;
int price;
}b[5];
void main()
{int i,j;
printf("Yugaank Pathak H-77\n");
struct Books b[5];
for(i=0;i<5;i++)
{printf("Enter the details of book %d\n",i);
printf("Name:\n");
scanf("%s",&b[i].name);
printf("Number of pages:\n");
scanf("%d",&b[i].pages);
printf("Price:\n");
scanf("%d",&b[i].price);}
printf("\nWhich Book's details do you need?\n");
scanf("%d",&j);
printf("Name: %s\n",b[j].name);
printf("Number of pages: %d\n",b[j].pages);
printf("Price: %d\n",b[j].price);
}
