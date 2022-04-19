/* Bu program alfabedeki büyük harfleri ekrana yazar */
#include <stdio.h>
#include <conio.h>
main()
{
   char harf;
   for(harf = 'A'; harf <= 'Z'; harf++)
      printf("%c  ", harf);
   
   
   getch();
}
