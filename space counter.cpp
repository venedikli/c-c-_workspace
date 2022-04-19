#include <stdio.h>
#include <conio.h>
main()
{
      int kar,bosluk_sayisi=0;
      printf("bir cumle giriniz:\n");
      kar=getchar();
      while(kar!='\n')
      {
           if(kar==' ')
           bosluk_sayisi++;
           kar=getchar();           
      }
      printf("\nbosluklarin sayisi=%d\n",bosluk_sayisi);
      
      getch();
}
      