#include<stdio.h>
#include<string.h>
void F1()
{ char A[10];
printf("Enter elements of A\n");
scanf("%s",&A);
printf("The string length is = %d",strlen(A));
}
void F2()
{char A[10];
printf("Enter elements of A\n");
scanf("%s",&A);
printf("The reversed string is:\n");
printf("%s",strrev(A));
}
void F3()
{char A[10];
char B[]={"Yugaank"};
printf("%s",B);
printf("Enter elements of A\n");
scanf("%s",&A);
strcpy(B,A);
printf("The elements of A are: %s\nThe elements of B after copying from A are: %s",A,B);
}
void F4()
{char A[10];
char B[10];
printf("Enter elements of A\n");
scanf("%s",&A);
printf("Enter elements of B\n");
scanf("%s",&B);
printf("The compiled string is: %s",strcat(B,A));
}
void main()
{int d;
printf("Yugaank Pathak H-77\n");
printf("Press 1 to calculate the length of the string,\nPress 2 to reverse the string,\nPress 3 to copy a string,\nPress 4 to compile two strings\n");
scanf("%d",&d);
printf("Your choice is = %d\n",d);
switch(d)
{ case 1: F1();
          break;
  case 2: F2();
          break;
  case 3: F3();   
          break;
  case 4: F4();
          break;
  default:printf("Enter a value from 1-4");        
}
getch();
}