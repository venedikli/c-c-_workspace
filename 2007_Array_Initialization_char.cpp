      /*  exmp_array_2.cpp */
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{ int i;
  char str[6]={'h','e','l','l','o','\0'};
     printf("\n*** string prit ***%7s\n",str);

     for(i=0;i<6;i++)
       printf("\n%c",str[i]);

  getch();
}
