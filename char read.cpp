#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{
      char kar;
      printf("\nbir karakter giriniz:");
      scanf("%c",&kar);
      if(isalpha(kar))
      printf("\n%c\n\n",kar);
      else
      printf("\n %c bir alfabetik karakter degil.\n\n",kar);
      getch();
}
  