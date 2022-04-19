#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      char ch;
      for(i=0,ch='A';i<4;i++,ch+=2*i)
        
        printf("%c",ch);
        getch();
        
      return(0);
}      