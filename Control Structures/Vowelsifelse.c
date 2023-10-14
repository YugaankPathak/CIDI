#include <stdio.h>
void main()
{ char d;
printf("Enter the character\n",d);
scanf("%c",&d);
if(d=((('A'||'E')||('I'||'O')||('U'||'a')||('e'||'i'))||('o'||'u')))
printf("It is a vowel");
else
printf("It is not vowel");
}