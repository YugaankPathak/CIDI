# include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    printf("Please enter the value of a\n",a);
    scanf("%d",&a);
    b= --a;
    printf("The value of b is %d",b);
    c= a--;
    printf("The value of c is %d",c);
    printf("The value of a is %d",a);
    return 0;
}
