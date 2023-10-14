#include <stdio.h>
void main()
{ char d,A,E,I,O,U,a,e,i,o,u;
printf("Enter the character for d\n",d);
scanf("%c",&d);
switch(d)
{
case 'A': printf("It is a vowel\n",A);
break;

case 'E': printf("It is a vowel\n",E);
break;

case 'I': printf("It is a vowel\n",I);
break;

case 'O': printf("It is a vowel\n",O);
break;

case 'U': printf("It is a vowel\n",U);
break;

case 'a': printf("It is a vowel\n",a);
break;

case 'e': printf("It is a vowel\n",e);
break;

case 'i': printf("It is a vowel\n",i);
break;

case 'o': printf("It is a vowel\n",o);
break;

case 'u': printf("It is a vowel\n",u);
break;

default: printf("It is not a vowel");        
}
getch();
}
