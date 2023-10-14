#include <stdio.h>
void main()
{printf("Yugaank Pathak H-77\n");
char str1[10];
char str2[10];
int i=0,f=0;
printf("Enter the string 1\n");
scanf("%s",&str1);
printf("Enter the string 2\n");
scanf("%s",&str2);
for(i=0;i<10;i++)
{if(str1[i]!='\0')
{
    if(str1[i]!=str2[i])
    {
        f++;
        break;
    }
}}
if(f==0)
{printf("Both strings are equal");}
else
{printf("Both strings are not equal");}
}