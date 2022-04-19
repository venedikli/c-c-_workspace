#include <stdio.h>
#include <conio.h>
main()
{
      int sayi,sayac,toplam;
      printf("\nbir tamsayi giriniz\n");
      printf("\nislemleri durdurmak icin\nnegatif tamsayi giriniz..\n");
      sayac=0;
      toplam=0;
      scanf("%d",&sayi);
      while(sayi>0)
      {
        sayac++;
        toplam=toplam+sayi;
        printf("\nbir tamsayi giriniz  ");
        scanf("%d",&sayi);       
      }
      printf("\ngirdiginiz pozitif sayilarin miktari=%d",sayac);
      printf("\ngirdiginiz pozitif sayilarin toplami=%d",toplam);
      getch();
}
      
      