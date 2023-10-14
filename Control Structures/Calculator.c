#include <stdio.h>
void main(int argc, char const *argv[])
{
    float a,b,c;
    int d;
    printf("Enter the value of number 1\n",a);
    scanf("%f",&a);
    printf("Enter the value of number 2\n",b);
    scanf("%f",&b);
    printf("Select arithimatic operator 1 for addition, 2 for substraction, 3 for multiplication, 4 for division\n",d);
    scanf("%d",&d);
    switch(d)
    {
        case 1:c=(a+b);
        printf("c=%f",c);
        break;

        case 2:c=(a-b);
        printf("c=%f",c);
        break;

        case 3:c=(a*b);
        printf("c=%f",c);
        break;

        case 4:c=(a/b);
        printf("c=%f",c);
        break;
     }
    getch();
}
