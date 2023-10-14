#include<stdio.h>
void main()
{char str1[20];
int n=0,i;
printf("Yugaank Pathak H-77\n");
printf("Enter characters: ");
scanf("%s",str1);
for(i=0;str1[i]!='\0';i++)
n++;
for(i=n;i>=0;i--)
printf("%c",str1[i]);
}
