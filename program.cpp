#include<stdio.h>
#include<conio.h>
main(void)
{
    int n,m;
    for(n=0;n<8;n++)
    {
     printf("%d",n);
     switch(n%3)
      {
          case 0:printf("H");
          case 1:printf("E");
                 break;
          case 3:printf("\n");
      }
               
    }
   printf("\n***\n");
   n=10;
   while(++n<=13)
     printf("%d\n");
   do
     printf("%d\n");
   while(++n<=12);
     printf("\n***\n");
   for(n=1;n*n<60;n+=3)
     printf("%d\n",n);
     
   getch();
}  