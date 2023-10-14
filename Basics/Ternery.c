#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the value of a\n",a);
    scanf("%d",&a);
    printf("Enter the value of b\n",b);
    scanf("%d",&b);
    printf("The geater number is %d",(a>b)?a:b);
    getch();
}