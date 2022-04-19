#include <stdio.h>
#include<conio.h>
main()
{
      int kilo,boy,yas;
      float ideal,k;
      char cins;
      ideal=0;      
      printf("Cinsiyetinizi Giriniz: ");
      cins=getchar();
      printf("Boyunuzu Giriniz: ");
      scanf("%d",&boy);
      printf("Yasinizi Giriniz: ");
      scanf("%d",&yas);
      if (cins=='e')  k=0,8;
      if (cins=='b')  k=0,9;
      ideal=(boy-100)+(yas/10)*k;
      printf("Kilonuzu Giriniz: ");
      scanf("%d",&kilo);
      if (kilo>ideal) printf("Kilo Vermelisiniz... Ýdeal Kilonuz: %2.2f",ideal);
      else printf("Kilo Almalisiniz... Ýdeal Kilonuz: %2.2f",ideal);
      getch();
}
