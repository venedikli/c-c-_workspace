#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,c;
      printf("birinci sayi,A...");
      scanf("%d",&a);
      printf("ikinci sayi,B...");
      scanf("%d",&b);
      printf("ucuncu sayi,C...");
      scanf("%d",&c);
      if(a<b)
         if(a<c)
         printf("en kucuk sayi=%d\n",a);
         else 
         printf("en kucuk sayi=%d\n",c);
     else if(b<c)
      printf("en kucuk sayi=%d\n",b);
     else
      printf("en kucuk sayi=%d\n",c);
      
     getch();
}
     