#include<stdio.h>
#include<conio.h>
main(void)
{
          int i;
          printf("bir sayi girin..");
          scanf("%d",&i);
         
          while(i!=0)
          {
          printf("%d",i%10);
          i=i/10;
          }
   getch();
}       