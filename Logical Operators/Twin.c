#include <stdio.h>
int main(int argc, char const *argv[])
{
int a,b,c;
printf("Enter your birth day\n",a);
scanf("%d",&a);
printf("Enter your birth month\n",b);
scanf("%d",&b);
printf("Enter your birth year\n",c);
scanf("%d",&c);
if(a!=19||b!=10||c!=2004)
printf("You are not my twin");
else
{
if(a=19&&b=10&&c=2004)
printf("Congratuations you are my twin you win a billion $");
else
printf("You are an alien, EXTRA VEHICULAR ACTIVITY DETECTED");
}
    return 0;
}