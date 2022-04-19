#include<stdio.h>
#include<conio.h>

main()
{
  int a,b,ekok=1,s=2,s1,s2;
   printf("iki sayi giriniz...");
   scanf("%d %d",&a,&b);
   s1=a;
   s2=b;
  while(1)
   {
    if (a%s==0 || b%s==0)
    {
    if(a%s==0) a=int(a/s);
    if(b%s==0) b=int(b/s);
    ekok=ekok*s;
    }
    else s=s+1;
    if (s==11) 
    break;
   }
  printf("%d ve %d sayilarinin ekok'u = %d",s1,s2,ekok);
  getch();
}
