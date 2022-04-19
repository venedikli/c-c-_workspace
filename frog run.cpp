#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void yarisBasliyor();
int kurbagalar[20];

 main ()
{
  yarisBasliyor();
  printf("    ### KOBAY OLMA YARISI SONA ERDI ###\n");
  printf("Kazananlar :");
  for(int k=0;k<20;k++) /*kurbagalardan 10.havuza gelenleri test edip kazananlarý ekrana yazdýrdým*/

  if(kurbagalar[k]==10)

  printf("%d  ",k+1);

  printf("\n");
  getch();
}

void yarisBasliyor()
{
  srand(time(NULL));
  int kosul=0,m=0,atlama=1;

  for(int i=0;i<20;i++)/*bütün kurbaðalarý 1.havuza koydum*/
  {
    kurbagalar[i] = 1;
  } 
  do
  {
    for(int i=0;i<20;i++) //kurbaðalarýn atlamasi için rastgele sayý üretttim
    {
      kurbagalar[i] += rand()%3+1;
    }
    printf("%d. Atlayis:    1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0\n",atlama); 
    atlama++;
    for(int b=1;b<=10;b++)//havuz numaralarýný yazdýrdým
    {
      printf("%2d.Havuz:      ",b);
      for(int c=0;c<20;c++) //kurbaðalarýn kaçýncý havuzda olduðunu test ettim
      {
        if(kurbagalar[c]>=10)
        {
          kurbagalar[c]=10;
          m++;
        } 
        if(kurbagalar[c]==b)
          printf("@ ");
        else
          printf("- ");
      }
      printf("\n");
    }
    printf("*********************************************************\n");

    if(m!=0)
      break;

    getch();
  } while(m!=10);
}
