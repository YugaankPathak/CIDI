#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Students
{ int Roll;
 char Name[50];
 int Marks;
 char Grade[20];
};
void main()
{ struct Students S[5];
char N[50];
int i,j=0;
printf("Enter Roll Number, Name, Marks and Grade\n");
for(i=0;i<5;i++)
{scanf("%d",&S[i].Roll);
scanf("%s",&S[i].Name);
scanf("%d",&S[i].Marks);
scanf("%s",&S[i].Grade);}
printf("Enter Name of Student: ");
scanf("%s",&N);
{for (i=0;i<5;i++)
if(strcmp(S[i].Name,N)==0)
{printf("\nMarks= %d",S[i].Marks);
j++;}}
if(j==0)
{printf("\nNo student found");}
getch();
}