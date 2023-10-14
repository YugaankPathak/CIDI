#include <stdio.h>
int days(int);
int hours(int);
int minutes(int);
void main()
{int n;
printf("Enter the number: ");
scanf("%d",&n);
days(n);
hours(n);
minutes(n);
printf("%d:%d:%d",days(n),hours(n),minutes(n));
getch();
}
int days(int n)
{ int a;
a=n/1440;
return a;
}
int hours(int n)
{ int b,a;
a=n/1440; 
b=(n-(a*1440))/60;
return b;
}
int minutes(int n)
{ int c;
c=n%60;
return c;
}