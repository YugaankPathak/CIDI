#include <stdio.h>
void main()
{int i=10;
float f=20;
i=f; //experiment with [i=f and f=i] and [i=10 j=0 and j=10 i=0]
printf("i= %d\n",i);
printf("f= %f\n",f);
}