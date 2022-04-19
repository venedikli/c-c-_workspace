#define pi 3.14
#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
double f,c,r,e,l,i;
double pay,payda;
printf("f= ");scanf("%f ",&f);
printf("c= ");scanf("%f ",&c);
printf("r= ");scanf("%f ",&r);
printf("e= ");scanf("%f ",&e);
printf("l= ");scanf("%f ",&l);
pay=e;
payda=sqrt(pow(r,2))+pow(((2*pi*f*l)-(1/2*pi*f*c)),(2));
i=pay/payda;
printf("i=%f  ",i);
getch();
}
