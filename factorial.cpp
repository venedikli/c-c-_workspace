#include <stdio.h>
#include <conio.h>
main()
{
      int fakt,i,n,sonuc;
       printf("ust sinir(tam sayi)\n");
       scanf("%d",&n);
       fakt=1;
      for(i=1;i<=n;i++)
       fakt=fakt*i;
       printf("\n%d!=1*2*3*....*%d=%d\n",n,n,fakt);
       getch();
}