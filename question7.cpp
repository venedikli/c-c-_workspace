#include <stdio.h>
#include <conio.h>
#define FORMAT "%s is a string\n"
int main()
{
 	int i=0;
 	while(i<3)
 	{
      switch(i++)
	  {
	    case 0:printf("Ahmet");
	    case 1:printf("Mehmet");
	    case 2:printf("Hasan");
	    default:printf("Hayir");
      }
      putchar('\n');
    }
    getch();
 	return 0;
}    
