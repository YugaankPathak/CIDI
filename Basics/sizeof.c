#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the value of a\n",a);
    scanf("%d",&a);
    b= sizeof(a);
    printf("%d",b);
    return 0;
}
