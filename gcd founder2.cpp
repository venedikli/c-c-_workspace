#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
      int a,b,buyuk,kucuk,kalan;
      printf("birinci sayiyi giriniz...");
      scanf("%d",&a);
      printf("ikinci sayiyi giriniz...");
      scanf("%d",&b);
      if(b>a)
       {
        buyuk=b;kucuk=a;
       }
      else
       {
        kucuk=b;buyuk=a;
       }
      if(kucuk==0) 
        printf("Obeb=%d",buyuk);
      else  if(buyuk%kucuk==0)
        printf("Obeb=%d",kucuk);
      else
       {
      while(buyuk%kucuk!=0)
       {
         kalan=buyuk%kucuk;
         buyuk=kucuk;
         kucuk=kalan;
       }
         printf("Obeb=%d",kalan);
           
       }
        getch();return 0;
      
      
} 
