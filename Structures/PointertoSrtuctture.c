#include<stdio.h>
struct Student
{ char name[100];
int roll;
char branch[20];
}s;
void main()
{struct Student *p,s; 
 p=&s;
 printf("Yugaank Pathak H-77\n");
 printf("Enter name: ");
 scanf("%s",&p->name);
 printf("Enter Roll No.: ");
 scanf("%d",&s.roll);
 printf("Enter Branch: ");
 scanf("%s",&s.branch);
 printf("Output:\n")
 printf("Name: %s\n",p->name);
 printf("Roll No.: %d\n",p->roll);
 printf("Branch: %s\n",p->branch);
}