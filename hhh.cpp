#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>     
     
main()
{
   int a,b,c,d,k;

      printf(" 1. sayi : ");
      scanf("%d",&a);
      printf(" 2. sayi : ");
      scanf("%d",&b);
      printf(" 3. sayi : ");
      scanf("%d",&c);
      printf(" 4. sayi : ");
      scanf("%d",&d);
      if(a<b)
          {k=a;
           a=b;
           b=k;
           }
       if(a<c)
          {k=a;
           a=c;
           c=k;
           }
        if (a<d)
          {k=a;
           a=d;
           d=k;
           }

       printf("en buyuk sayi :%d \n",a);
       
        if(b>c)
           {k=b;
            b=c;
            c=k;
           }
        if (b>d)
          {k=b;
           b=d;
           d=k;
           }
           printf(" en kucuk sayi :%d",b);
    getch();
}
