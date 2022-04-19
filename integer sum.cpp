#include <stdio.h>
#include <conio.h>
main()
{
      int toplam,i,n;
      printf("ust limit(n...)");
      scanf("%d",&n);
      toplam=0;
      i=1;
      while(i<=n)
      {
        toplam=toplam+i;
        i++;
      }
      printf("\n1+2+3+4+...+%d=%d\n",n,toplam);
      
      getch();
}