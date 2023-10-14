#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d;
    printf("Enter the marks in Mathematics\n",a);
    scanf("%f",&a);
    printf("Enter the marks in Physics\n",b);
    scanf("%f",&b);
    printf("Enter the marks in Chemistry\n",c);
    scanf("%f",&c);
    d=((a+b+c)/3);
    if(a<90||b<90||c<90||d<92)
    printf("Sorry:(you have not cleared the cutoff");
    else 
    printf("Congratulations:)you have cleared the cutoff");
    getch();
}