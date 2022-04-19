#include<stdio.h>
#include<conio.h>

main() {
int a,b,i,ebob=0,ks;
printf("iki sayi giriniz...");
scanf("%d %d",&a,&b);

if (a<b) ks=a;
if (b<a) ks=b;

for (i=1;i<=ks;++i)
if (a%i==0 && b%i==0) ebob=i;

printf("%d ve %d sayilarinin ebob'u = %d",a,b,ebob);
getch();
}
