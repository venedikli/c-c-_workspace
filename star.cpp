#include<stdio.h>
#include<conio.h>

main()
{
     int x,y;
     
     for(x=0;x<7;x++)
     {
         for(y=0;y<7;y++)
         {
              if(x>=y)
              printf("*");
              
                         
         }
         printf("\n");
     }
     getch();     

    }