#include<stdio.h>
int asal(int n);
main()
{
       int m,test;
       printf("Asal sayilari dadas hesaplar");
       while(1) 
        {
       printf("\n\n Sayi giriniz...");
       scanf("%d",&m);
       test=asal(m);
       if (test)
         printf("\n\nSayi asal sayi degildir!!!...");
      else
        printf("\n\n Asal sayidir!!!...");
        } 
}
 int asal(int n)
 {
     int i,s,f;
     s=0;
     for(i=2;i<n;i++){
     f=n%i;
     if(f==0)
     return (++s);
  }
return (s);
}
