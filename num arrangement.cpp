#include <stdio.h>
#include <conio.h>
main()
{
      int a,b,;
      printf("birinci sayi,A...\n");
      scanf("%d",&a);
      printf("ikinci sayi,B...\n");
      scanf("%d",&b);
      if(a<b)
         if((b%2)==0)
          printf("buyuk sayi=%d cifttir\n",b);
        else 
          printf("buyuk sayi=%d tektir\n",b);
      else if((a%2)==0)
        printf("buyuk sayi=%d cifttir\n",a);
      else 
        printf("buyuk sayi=%d tektir\n",a);
      
      getch();
} 