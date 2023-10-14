#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d,e,f;
    printf("Enter Marks in Maths\n",a);
    scanf("%f",&a);
    printf("Enter Marks in Science\n",b);
    scanf("%f",&b);
    printf("Enter Marks in English\n",c);
    scanf("%f",&c);
    printf("Enter Marks in Hindi\n",d);
    scanf("%f",&d);
    printf("Enter Marks in Social Science\n",e);
    scanf("%f",&e);
    f=((a+b+c+d+e)/5);
    printf("Your percntage is%f\n",f);
    if(f<35)
    printf("Fail");
    else{if(f>=35&&f<40)
    printf("Just Pass");
    else{if(f>=40&&f<50)
    printf("Third Grade");
    else{if(f>=50&&f<65)
    printf("Second Grade");
    else{if(f>=65&&f<75)
    printf("First Division");
    else{if(f>=75&&f<=100)
    printf("Great Honours");
}}}}}
getch();
}