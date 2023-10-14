#include<stdio.h>
void main()
{int n,i,j=0;
printf("Enter the number: ");
scanf("%d",&n);
while(n>=1)
{ i=(n%10);
   n=n/10;
   j=(j*10)+i;
}
printf("The reverse is: %d",j);
printf("\nThe double of the reverse is: %d",j*2);
getch();
}
