#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("Enter Marks in Maths\n",a);
    scanf("%d",&a);
    printf("Enter Marks in Science\n",b);
    scanf("%d",&b);
    printf("Enter Marks in English\n",c);
    scanf("%d",&c);
    printf("Enter Marks in Hindi\n",d);
    scanf("%d",&d);
    printf("Enter Marks in Social Science\n",e);
    scanf("%d",&e);
    f=((a+b+c+d+e)/5);
    printf("Your Percentage is %d\n",f);
    return 0;
}
