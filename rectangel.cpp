#include<stdio.h>
#include <conio.h>
main()
{
      int x,y;
      for(y=1;y<13;y++)
      {
        for(x=1;x<24;x++)
        {
          if(x==13-y||x==11+y||x=y)
          printf("\xDB");
          printf("\n");
         }
      }
      getch();
}    
            