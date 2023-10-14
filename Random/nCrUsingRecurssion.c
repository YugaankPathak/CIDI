#include<stdio.h>
int combination(int,int);
int fact(int);
void main()
{
    int n,r,a;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Enter value of r: ");
    scanf("%d",&r);
    a=combination(n,r);
    
}
int combination(int n, int r)
{ 
    int h,j,k,s;
    h= fact (n);
    k= fact(r);
    j= fact(n-r);
    s= ((h)/(k*j));
    printf("\n%d",s);
}
int fact(int a)
{int i;
if(a<=1)
return 1;
else
{i= a*fact(a-1);
return i;}
}
