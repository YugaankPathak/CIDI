#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter the value of a\n",a);
    scanf("%d",&a);
    printf("Enter the value of b\n",b);
    scanf("%d",&b);
    printf("Enter the value of c\n",c);
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("a is greatest");
    else{if(b>a&&b>c)
    printf("b is greatest");
    else{if(c>a&&c>b)
    printf("c is greatest");
    else
    printf("Error");
    }}
    return 0;
    }
