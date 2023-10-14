#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i=0,n;
    printf("Enter the no.\n",n);
    scanf("%d",&n);
    do{ i=i+(n%10);
    n=n/10;
    }while(n>0);
printf("The sum is %d",i);
    getch();
}
